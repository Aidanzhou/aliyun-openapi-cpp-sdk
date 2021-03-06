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

#include <alibabacloud/live/model/DescribeUpBpsPeakDataRequest.h>

using AlibabaCloud::Live::Model::DescribeUpBpsPeakDataRequest;

DescribeUpBpsPeakDataRequest::DescribeUpBpsPeakDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeUpBpsPeakData")
{}

DescribeUpBpsPeakDataRequest::~DescribeUpBpsPeakDataRequest()
{}

std::string DescribeUpBpsPeakDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUpBpsPeakDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeUpBpsPeakDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeUpBpsPeakDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeUpBpsPeakDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeUpBpsPeakDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeUpBpsPeakDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeUpBpsPeakDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeUpBpsPeakDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUpBpsPeakDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUpBpsPeakDataRequest::getDomainSwitch()const
{
	return domainSwitch_;
}

void DescribeUpBpsPeakDataRequest::setDomainSwitch(const std::string& domainSwitch)
{
	domainSwitch_ = domainSwitch;
	setParameter("DomainSwitch", domainSwitch);
}

