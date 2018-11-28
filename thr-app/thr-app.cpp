#include "pch.h"
#include <iostream>
#include <thrift\stdcxx.h>
#include <thrift\transport\TSocket.h>
#include <thrift\transport\TBufferTransports.h>
#include <thrift\protocol\TBinaryProtocol.h>

#include "base58.h"

#include "API.h"

using namespace apache::thrift::transport;
using namespace apache::thrift::protocol;
using namespace api;

int main()
{
	std::shared_ptr<TSocket> socket = std::shared_ptr<TSocket>(new TSocket("127.0.0.1", 9090));
	std::shared_ptr<TTransport> transport = std::shared_ptr<TTransport>(new TBufferedTransport(socket));
	std::shared_ptr<TProtocol> protocol = std::shared_ptr<TProtocol>(new TBinaryProtocol(transport));
	std::shared_ptr<APIClient> api = std::shared_ptr<APIClient>(new APIClient(protocol));

	try
	{
		transport->open();
	}
	catch (...)
	{
		printf("thrift error: failed connect to node\n");
	}

	if (transport->isOpen())
	{
		std::cout << "Transport was opened" << std::endl;
		/** api code begin */
		/** BalanceGet begin */

		const char* rs = "H5ptdUUfjJBGiK2X3gN2EzNYxituCUUnXv2tiMdQKP3b";
		std::string str = EncodeBase58((unsigned char*)rs, (unsigned char*)rs + strlen(rs));

		std::vector<unsigned char> vvv;
		auto arr = DecodeBase58(rs, vvv);
		std::string dst(vvv.size(), 0);
		memcpy_s((void*)dst.c_str(), vvv.size(), &(vvv[0]), vvv.size());

		Address          addr = dst;// "H5ptdUUfjJBGiK2X3gN2EzNYxituCUUnXv2tiMdQKP3b";
		Currency         cur = 'cs';
		BalanceGetResult bg_res;
		TransactionGetResult t_res;
		TransactionsGetResult tr_res;
		try
		{
			api->BalanceGet(bg_res, addr, cur);
			//api->TransactionsGet(tr_res, addr, 0, 10);
		}
		catch (...)
		{
			return 1;
		}
		bg_res.printTo(std::cout);
		std::cout << std::endl << std::endl;
		//tr_res.printTo(std::cout);
		//std::cout << std::endl << std::endl;

		/** BalanceGet end */

		// do something

		/** api code end */

		transport->close();
	}

	//system("pause");
	return 0;
}