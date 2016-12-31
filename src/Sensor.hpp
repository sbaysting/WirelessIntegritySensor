/*
 * Sensor.hpp
 *
 *  Created on: Dec 31, 2016
 *      Author: samuel
 */

#ifndef SENSOR_HPP_
#define SENSOR_HPP_

#include <vector>
#include <string>

template<typename OutputDataType>

class Sensor{

	std::string sensorName;

public:
	virtual Sensor() = 0;
	virtual ~Sensor() = 0;
	virtual OutputDataType read() = 0;

	void setBufferSize(int);
	int getBufferSize();
	void setName(std::string);
	std::string getName();
};



#endif /* SENSOR_HPP_ */
