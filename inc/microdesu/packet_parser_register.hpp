
#include <vector>
#include <string>

//The IPacketParser interface must be implemented by all packet parsers

class IPacketParser
{
	IPacketParser();
	virtual ~IPacketParser();
	//Returns true if successfull, else false
	virtual bool Parse(std::string);
};

//User code must implement the IPacketParserRegister interface
//This interface is used by the microdesu library to execute parsers on incoming network packets,
//rigth after a possible byte level decompression phase
//
//The IPacketParserRegister can have many instances,
//each can be locked into a different microdesu socket
//allowing different parsers to be used for different IP:PORT pairs

class IPacketParserRegister
{
	IPacketParserRegister();
	virtual ~IPacketParserRegister();
	virtual std::vector<IPacketParser>& getParserList();
};
