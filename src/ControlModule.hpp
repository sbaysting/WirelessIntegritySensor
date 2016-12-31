/*
 * ControlModule.hpp
 *
 *  Created on: Dec 31, 2016
 *      Author: samuel
 */

#ifndef CONTROLMODULE_HPP_
#define CONTROLMODULE_HPP_

#include <vector>

#include "BluetoothController.hpp"
#include "XbeeController.hpp"
#include "Sensor.hpp"
#include "Algorithm.hpp"
#include "Alert.hpp"

class ControlModule{

	BluetoothController* btc;
	XbeeController* xbc;
	std::vector<Sensor*> sensors;
	std::vector<Algorithm*> algos;

public:
	~ControlModule();
	static void registerBluetoothController(BluetoothController*);
	static void registerXbeeController(XbeeController*);
	static void registerSensor(Sensor*);
	static void registerAlgorithm(Algorithm*);

private:
	ControlModule();

};



#endif /* CONTROLMODULE_HPP_ */
