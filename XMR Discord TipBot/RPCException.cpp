#include "RPCException.h"
#include <utility>

RPCConnectionError::RPCConnectionError(std::string general_error) : genErr(std::move(general_error))
{
}

const std::string & RPCConnectionError::getGeneralError()
{
	return genErr;
}

const char * RPCConnectionError::what()
{
	return "Connection to the RPC Failed! Ensure RPC is running and the port is correct. Contact @Admins for help.";
}

RPCGeneralError::RPCGeneralError(const std::string& code, std::string general_error) : genErr(std::move(general_error))
{
}

const std::string & RPCGeneralError::getGeneralError()
{
	return genErr;
}

const char * RPCGeneralError::what()
{
	return "RPC error, check logs for more infomation. If this continues contact @Admins";
}