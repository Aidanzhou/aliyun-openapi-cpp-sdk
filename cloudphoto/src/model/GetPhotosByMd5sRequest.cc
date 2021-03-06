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

#include <alibabacloud/cloudphoto/model/GetPhotosByMd5sRequest.h>

using AlibabaCloud::CloudPhoto::Model::GetPhotosByMd5sRequest;

GetPhotosByMd5sRequest::GetPhotosByMd5sRequest() :
	RpcServiceRequest("cloudphoto", "2017-07-11", "GetPhotosByMd5s")
{}

GetPhotosByMd5sRequest::~GetPhotosByMd5sRequest()
{}

std::string GetPhotosByMd5sRequest::getLibraryId()const
{
	return libraryId_;
}

void GetPhotosByMd5sRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setParameter("LibraryId", libraryId);
}

std::string GetPhotosByMd5sRequest::getStoreName()const
{
	return storeName_;
}

void GetPhotosByMd5sRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setParameter("StoreName", storeName);
}

std::string GetPhotosByMd5sRequest::getState()const
{
	return state_;
}

void GetPhotosByMd5sRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::vector<std::string> GetPhotosByMd5sRequest::getMd5()const
{
	return md5_;
}

void GetPhotosByMd5sRequest::setMd5(const std::vector<std::string>& md5)
{
	md5_ = md5;
	for(int i = 0; i!= md5.size(); i++)
		setParameter("Md5."+ std::to_string(i), md5.at(i));
}

