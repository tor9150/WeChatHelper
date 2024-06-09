#include "MPController.h"
#include "utils/Utils.h"
#include <vector>
#include "wechat/NetScene.h"
#include "wechat/WeChat.h"
#include <google/protobuf/util/json_util.h>
#include <sstream>

namespace lucky {

	namespace service {

		namespace controller {

			using namespace MMPro::micromsg;
			using namespace google::protobuf::util;

			std::string MPController::NetSceneGetBizProfile(const std::string& params) {
				std::wstring bizUserName = GetWStringParam(params, "$.bizUserName");
				std::shared_ptr<BizProfileV2Resp> result = lucky::wechat::NetScence::GetInstance().BizProfileV2(bizUserName);
				std::string response = R"({"code":200,"msg":"GetBizProfile."})";
				if (result != nullptr) {
					response = "";
					MessageToJsonString(*result.get(), &response);
				}
				return response;
			}
		}
	}
}