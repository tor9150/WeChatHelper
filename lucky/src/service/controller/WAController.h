#ifndef WACONTROLLER_H
#define WACONTROLLER_H

#include "HttpController.h"


namespace lucky {
	namespace service {
		namespace controller {

			class WAController : public HttpController<WAController> {
			public:
				PATHS_BEGIN
					ADD_PATH("/api/netscene/jslogin", NetSceneJsLogin);
				PATHS_END
			public:
				//获取小程序code
				static std::string NetSceneJsLogin(const std::string& params);
			
			};


		}
	}
}

#endif // !WACONTROLLER_H
