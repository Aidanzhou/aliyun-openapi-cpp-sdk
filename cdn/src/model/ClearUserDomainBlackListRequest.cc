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

#include <alibabacloud/cdn/model/ClearUserDomainBlackListRequest.h>

using AlibabaCloud::Cdn::Model::ClearUserDomainBlackListRequest;

ClearUserDomainBlackListRequest::ClearUserDomainBlackListRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ClearUserDomainBlackList")
{}

ClearUserDomainBlackListRequest::~ClearUserDomainBlackListRequest()
{}

std::string ClearUserDomainBlackListRequest::getSecurityToken()const
{
	return securityToken_;
}

void ClearUserDomainBlackListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ClearUserDomainBlackListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ClearUserDomainBlackListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ClearUserDomainBlackListRequest::getDomainName()const
{
	return domainName_;
}

void ClearUserDomainBlackListRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long ClearUserDomainBlackListRequest::getOwnerId()const
{
	return ownerId_;
}

void ClearUserDomainBlackListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ClearUserDomainBlackListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ClearUserDomainBlackListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

