#include "WAController.h"
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

			std::string WAController::NetSceneJsLogin(const std::string& params) {
				std::string waId = GetStringParam(params, "$.waId");
				std::shared_ptr<JSLoginResponse> result = lucky::wechat::NetScence::GetInstance().JSLogin(waId);
				std::string response = R"({"code":200,"msg":"NetSceneJsLogin."})";
				if (result != nullptr) {
					response = "";
					MessageToJsonString(*result.get(), &response);
				}
				return response;
			}
		}
	}
}