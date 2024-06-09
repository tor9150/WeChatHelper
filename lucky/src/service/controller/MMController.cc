#include "MMController.h"
#include "GetA8KeyResp.pb.h"
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

			std::string MMController::NetSceneGetA8Key(const std::string& params) {
				std::wstring url = GetWStringParam(params, "$.url");
				std::wstring wxid = GetWStringParam(params, "$.wxid");
				int32_t nscene = GetIntParam(params, "$.nscene");
				std::shared_ptr<GetA8KeyResp> result = lucky::wechat::NetScence::GetInstance().GetA8Key(url, wxid, nscene);
				std::string response = R"({"code":200,"msg":"NetSceneGetA8Key."})";
				if (result != nullptr) {
					response = "";
					MessageToJsonString(*result.get(), &response);
				}
				return response;
			}

			std::string MMController::CdnDownload(const std::string& params) {
				std::string fileId = GetStringParam(params, "$.fileId");
				std::string aeskey = GetStringParam(params, "$.aeskey");
				std::string save = GetStringParam(params, "$.save");
				std::string fileType = GetStringParam(params, "$.fileType"); //image,video,file
				int64_t success = lucky::wechat::WeChat::GetInstance().CDNDownload(fileId, aeskey, "0", fileType, save);
				std::ostringstream oss;
				oss << "{\"code\":" << success << "}";
				return oss.str();
			}

			std::string MMController::CdnUpload(const std::string& params) {
				return "";
			}

			std::string MMController::WxDump(const std::string& params) {
				return "";
			}

			std::string MMController::GetSelfInfo(const std::string& params) {
				common::SelfInfo info;
				int64_t success = lucky::wechat::WeChat::GetInstance().GetSelfInfo(info);
				return info.ToJson();
			}

			void SelfDetachRoutine(void* args) {
				OutputDebugString("SelfDetach");
				Sleep(1000);
				lucky::wechat::WeChat::GetInstance().DeInitializeProcHook(-1);
			}

			std::string MMController::SelfDetach(const std::string& params) {
				//框架不支持异步先创建线程这样做
				 CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)SelfDetachRoutine, NULL, NULL, 0);
				 std::ostringstream oss;
				 oss << "{\"code\":" << 0 << "}";
				 return oss.str();
			}

			std::string MMController::TenPayTransferConfirm(const std::string& params) {
				std::wstring transId = GetWStringParam(params, "$.transId");
				std::wstring wxid = GetWStringParam(params, "$.wxid");
				int64_t success = lucky::wechat::WeChat::GetInstance().TenPayTransferConfirm( wxid, transId);
				std::ostringstream oss;
				oss << "{\"code\":" << success << "}";
				return oss.str();
			}
		}
	}
}
