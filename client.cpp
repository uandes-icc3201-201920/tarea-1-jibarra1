#include <iostream>
#include <memory>
#include <string>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include "util.h"

using namespace std;

char *socket_path = (char *)"/tmp/db.tuple.sock";

int main(int argc, char** argv) {

	string cmd = "";

	while (cmd != "quit") {
		cout << ">";
		cin >> cmd;
		if (cmd == "connect"){

		}
		else if (cmd == "disconnect"){

		}
		else if (cmd == "insert"){

		}
		else if (cmd == "get"){

		}
		else if (cmd == "peek"){

		}
		else if (cmd == "update"){

		}
		else if (cmd == "delete"){

		}
		else if (cmd == "list"){

		}
	}

	return 0;
}
