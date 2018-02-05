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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEUSERCUSTOMLOGCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEUSERCUSTOMLOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeUserCustomLogConfigRequest : public RpcServiceRequest
			{

			public:
				DescribeUserCustomLogConfigRequest();
				~DescribeUserCustomLogConfigRequest();

				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVersion()const;
				void setVersion(const std::string& version);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string securityToken_;
				long ownerId_;
				std::string version_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEUSERCUSTOMLOGCONFIGREQUEST_H_