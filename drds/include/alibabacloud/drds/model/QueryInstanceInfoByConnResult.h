/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DRDS_MODEL_QUERYINSTANCEINFOBYCONNRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_QUERYINSTANCEINFOBYCONNRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT QueryInstanceInfoByConnResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Vip
					{
						std::string type;
						std::string vpcId;
						std::string iP;
						std::string port;
						std::string vswitchId;
					};
					std::string status;
					std::string description;
					std::string zoneId;
					std::string specTypeId;
					long createTime;
					std::string specification;
					std::string type;
					std::string drdsInstanceId;
					long version;
					std::string networkType;
					std::string vpcCloudInstanceId;
					std::string regionId;
					std::vector<Vip> vips;
					std::string specTypeName;
				};


				QueryInstanceInfoByConnResult();
				explicit QueryInstanceInfoByConnResult(const std::string &payload);
				~QueryInstanceInfoByConnResult();
				Data getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_QUERYINSTANCEINFOBYCONNRESULT_H_