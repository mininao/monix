#ifndef __rpc_H__
#define __rpc_H__

#include <unordered_map>


class RPC{
	typedef std::string (*wrappedFunction)(std::vector<std::string>);
	std::unordered_map<std::string, wrappedFunction> subscribedFunction_;

public:
	std::string getFunctionName(std::string functionString);
	std::vector<std::string> getParameter(std::string functionString);
	std::vector<std::string> split(std::string s, std::string delimiter);
	void subscribeFunction(std::string functionName, wrappedFunction function);
	bool isAnExistingFunction(std::string functionName);
	std::string execute(std::string functionName, std::vector<std::string> parameter);
};

#endif /* __rpc_H__ */

