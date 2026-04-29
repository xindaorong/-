#pragma once
#include<map>
#include<iostream>
#include"SectionInfo.h"
class ConfigMgr
{
public:
	~ConfigMgr() {
		_config_map.clear();
	}
	SectionInfo operator[](const std::string& section) {
		if (_config_map.find(section) == _config_map.end()) {
			return SectionInfo();
		}
		return _config_map[section];
	}
	ConfigMgr& operator=(const ConfigMgr& src) {
		if (&src == this)
		{
			return *this;
		}
		this->_config_map = src._config_map;
		return *this;
	}
	ConfigMgr(const ConfigMgr& src) {
		this->_config_map = src._config_map;
	}
	ConfigMgr();
private:
	std::map<std::string, SectionInfo>_config_map;


};

