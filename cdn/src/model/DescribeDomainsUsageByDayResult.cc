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

#include <alibabacloud/cdn/model/DescribeDomainsUsageByDayResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainsUsageByDayResult::DescribeDomainsUsageByDayResult() :
	ServiceResult()
{}

DescribeDomainsUsageByDayResult::DescribeDomainsUsageByDayResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainsUsageByDayResult::~DescribeDomainsUsageByDayResult()
{}

void DescribeDomainsUsageByDayResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allUsageByDays = value["UsageByDays"]["UsageByDay"];
	for (auto value : allUsageByDays)
	{
		UsageByDay usageByDaysObject;
		if(!value["TimeStamp"].isNull())
			usageByDaysObject.timeStamp = value["TimeStamp"].asString();
		if(!value["Qps"].isNull())
			usageByDaysObject.qps = value["Qps"].asString();
		if(!value["BytesHitRate"].isNull())
			usageByDaysObject.bytesHitRate = value["BytesHitRate"].asString();
		if(!value["RequestHitRate"].isNull())
			usageByDaysObject.requestHitRate = value["RequestHitRate"].asString();
		if(!value["MaxBps"].isNull())
			usageByDaysObject.maxBps = value["MaxBps"].asString();
		if(!value["MaxBpsTime"].isNull())
			usageByDaysObject.maxBpsTime = value["MaxBpsTime"].asString();
		if(!value["MaxSrcBps"].isNull())
			usageByDaysObject.maxSrcBps = value["MaxSrcBps"].asString();
		if(!value["MaxSrcBpsTime"].isNull())
			usageByDaysObject.maxSrcBpsTime = value["MaxSrcBpsTime"].asString();
		if(!value["TotalAccess"].isNull())
			usageByDaysObject.totalAccess = value["TotalAccess"].asString();
		if(!value["TotalTraffic"].isNull())
			usageByDaysObject.totalTraffic = value["TotalTraffic"].asString();
		usageByDays_.push_back(usageByDaysObject);
	}
	auto allUsageTotal = value["UsageTotal"];
	for (auto value : allUsageTotal)
	{
		UsageTotal usageTotalObject;
		if(!value["BytesHitRate"].isNull())
			usageTotalObject.bytesHitRate = value["BytesHitRate"].asString();
		if(!value["RequestHitRate"].isNull())
			usageTotalObject.requestHitRate = value["RequestHitRate"].asString();
		if(!value["MaxBps"].isNull())
			usageTotalObject.maxBps = value["MaxBps"].asString();
		if(!value["MaxBpsTime"].isNull())
			usageTotalObject.maxBpsTime = value["MaxBpsTime"].asString();
		if(!value["MaxSrcBps"].isNull())
			usageTotalObject.maxSrcBps = value["MaxSrcBps"].asString();
		if(!value["MaxSrcBpsTime"].isNull())
			usageTotalObject.maxSrcBpsTime = value["MaxSrcBpsTime"].asString();
		if(!value["TotalAccess"].isNull())
			usageTotalObject.totalAccess = value["TotalAccess"].asString();
		if(!value["TotalTraffic"].isNull())
			usageTotalObject.totalTraffic = value["TotalTraffic"].asString();
		usageTotal_.push_back(usageTotalObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["DataInterval"].isNull())
		dataInterval_ = value["DataInterval"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

std::vector<DescribeDomainsUsageByDayResult::UsageTotal> DescribeDomainsUsageByDayResult::getUsageTotal()const
{
	return usageTotal_;
}

std::string DescribeDomainsUsageByDayResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDomainsUsageByDayResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeDomainsUsageByDayResult::getDataInterval()const
{
	return dataInterval_;
}

std::string DescribeDomainsUsageByDayResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeDomainsUsageByDayResult::UsageByDay> DescribeDomainsUsageByDayResult::getUsageByDays()const
{
	return usageByDays_;
}

