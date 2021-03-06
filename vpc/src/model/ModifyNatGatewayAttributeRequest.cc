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

#include <alibabacloud/vpc/model/ModifyNatGatewayAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNatGatewayAttributeRequest;

ModifyNatGatewayAttributeRequest::ModifyNatGatewayAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyNatGatewayAttribute")
{}

ModifyNatGatewayAttributeRequest::~ModifyNatGatewayAttributeRequest()
{}

long ModifyNatGatewayAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNatGatewayAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyNatGatewayAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNatGatewayAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNatGatewayAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNatGatewayAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyNatGatewayAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNatGatewayAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyNatGatewayAttributeRequest::getName()const
{
	return name_;
}

void ModifyNatGatewayAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyNatGatewayAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyNatGatewayAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyNatGatewayAttributeRequest::getNatGatewayId()const
{
	return natGatewayId_;
}

void ModifyNatGatewayAttributeRequest::setNatGatewayId(const std::string& natGatewayId)
{
	natGatewayId_ = natGatewayId;
	setParameter("NatGatewayId", natGatewayId);
}

long ModifyNatGatewayAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNatGatewayAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

