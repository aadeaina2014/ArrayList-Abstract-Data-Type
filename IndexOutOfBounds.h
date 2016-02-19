#include <string>
class IndexOutOfBounds
{
private: 
	std::string errorMsg; 
public:
	IndexOutOfBounds(const std::string& err) 
	{ 
		errorMsg = err; 
	} 
	std::string getMessage() const 
	{ 
		return errorMsg;
	}
};