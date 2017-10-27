/*
 * Parameter.h
 *
 *  Created on: 05/feb/2016
 *      Author: samuele
 */

#ifndef SRC_PARAMETER_H_
#define SRC_PARAMETER_H_

#include "../Input/Input.h"
#include "../Spaced/SpacedQmer.h"

class FileParameter {
public:
	FileParameter();
	bool init(string pathFile1 = "", string pathFile2 = "");
	const PairFiles& getInputFiles() const;
	void addSpacedQmer(string nametype, string spaced);
private:
	PairFiles input_files;
	vector<pair<string, SpacedQmer>> spaced_seed;
};

struct VParameter
{
public:
	typedef shared_ptr<VParameter> Ptr;
	vector<FileParameter> files;
	vector<pair<string, SpacedQmer>> spaced_seed;
	VParameter();
};

#endif /* SRC_PARAMETER_H_ */
