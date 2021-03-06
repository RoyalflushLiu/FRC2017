/*
 * Executor.h
 *
 *  Created on: Jan 22, 2017
 *      Author: joshua
 */

#ifndef SRC_EXECUTORS_EXECUTOR_H_
#define SRC_EXECUTORS_EXECUTOR_H_

#include "../systems/RobotSystem.h"
#include "../Environment.h"
#include <vector>
#include <memory>

class Executor {
public:
	Executor(std::shared_ptr<Environment> environ);
	virtual ~Executor();
	virtual void execute() = 0;
protected:
	std::shared_ptr<Environment> environ;
	std::vector<std::unique_ptr<RobotSystem>>& systems;
};



#endif /* SRC_EXECUTORS_EXECUTOR_H_ */
