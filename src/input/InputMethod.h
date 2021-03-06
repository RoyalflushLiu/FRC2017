/*
 * InputMethod.h
 *
 *  Created on: Jan 23, 2017
 *      Author: joshua
 */

#ifndef SRC_INPUT_INPUTMETHOD_H_
#define SRC_INPUT_INPUTMETHOD_H_

class InputMethod {
public:
	InputMethod();
	virtual ~InputMethod();

	virtual double getForwardDistance() = 0;
	virtual double getSidewaysDistance() = 0;

	virtual bool shoot() = 0;
};



#endif /* SRC_INPUT_INPUTMETHOD_H_ */
