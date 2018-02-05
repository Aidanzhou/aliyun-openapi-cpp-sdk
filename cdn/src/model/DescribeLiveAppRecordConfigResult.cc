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

#include <alibabacloud/cdn/model/DescribeLiveAppRecordConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeLiveAppRecordConfigResult::DescribeLiveAppRecordConfigResult() :
	ServiceResult()
{}

DescribeLiveAppRecordConfigResult::DescribeLiveAppRecordConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveAppRecordConfigResult::~DescribeLiveAppRecordConfigResult()
{}

void DescribeLiveAppRecordConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLiveAppRecord = value["LiveAppRecord"];
	for (auto value : allLiveAppRecord)
	{
		LiveAppRecord liveAppRecordObject;
		if(!value["DomainName"].isNull())
			liveAppRecordObject.domainName = value["DomainName"].asString();
		if(!value["AppName"].isNull())
			liveAppRecordObject.appName = value["AppName"].asString();
		if(!value["OssEndpoint"].isNull())
			liveAppRecordObject.ossEndpoint = value["OssEndpoint"].asString();
		if(!value["OssBucket"].isNull())
			liveAppRecordObject.ossBucket = value["OssBucket"].asString();
		if(!value["OssObjectPrefix"].isNull())
			liveAppRecordObject.ossObjectPrefix = value["OssObjectPrefix"].asString();
		if(!value["CreateTime"].isNull())
			liveAppRecordObject.createTime = value["CreateTime"].asString();
		liveAppRecord_.push_back(liveAppRecordObject);
	}

}

std::vector<DescribeLiveAppRecordConfigResult::LiveAppRecord> DescribeLiveAppRecordConfigResult::getLiveAppRecord()const
{
	return liveAppRecord_;
}

