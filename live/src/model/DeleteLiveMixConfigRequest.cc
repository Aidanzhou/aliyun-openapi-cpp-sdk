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

#include <alibabacloud/live/model/DeleteLiveMixConfigRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveMixConfigRequest;

DeleteLiveMixConfigRequest::DeleteLiveMixConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteLiveMixConfig")
{}

DeleteLiveMixConfigRequest::~DeleteLiveMixConfigRequest()
{}

std::string DeleteLiveMixConfigRequest::getAppName()const
{
	return appName_;
}

void DeleteLiveMixConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DeleteLiveMixConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLiveMixConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteLiveMixConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteLiveMixConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DeleteLiveMixConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLiveMixConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteLiveMixConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLiveMixConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

