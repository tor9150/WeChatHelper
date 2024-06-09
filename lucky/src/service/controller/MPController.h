#ifndef MPCONTROLLER_H
#define MPCONTROLLER_H

#include "HttpController.h"


namespace lucky {
	namespace service {
		namespace controller {

			class MPController : public HttpController<MPController> {
			public:
				PATHS_BEGIN
					ADD_PATH("/api/netscene/getbizprofile", NetSceneGetBizProfile);
				PATHS_END
			public:
				//获取公众号首页
				static std::string NetSceneGetBizProfile(const std::string& params);
			};
		}
	}
}

#endif // !MPCONTROLLER_H
