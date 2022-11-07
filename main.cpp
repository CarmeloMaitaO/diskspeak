#include <iostream>
#include <unistd.h>
#include <cstring>

void help();

void version();

void test(char* arg);

bool check(char* arg);

void parser(char* arg);

void read();

void sread();

void write();

void swrite();

int main(int argc, char** argv)
{
        for(;;)
        {
                switch(getopt(argc, argv, "p:vh"))
                {
                        case 'h':
                                help();
                                break;
                        case 'v':
                                version();
                                break;
                        case 'p':
                                test(optarg);
                                break;
                        default:
                                help();
                                break;
                }
                break;
        }
        return 0;
}

void help()
{
        std::cout << "Instructions:" << std::endl;
        std::cout << "diskspeak -h|v" << std::endl;
        std::cout << "diskspeak -p \'[rw]...\' <disk>" << std::endl;
}

void version()
{
        std::cout << "Program version: Diskspeak 1.0";
}

void test(char* arg)
{
        if (check(arg))
        {
                parser(arg);
        } else {
                help();
        }
}

bool check(char* arg)
{
        bool error = false;
        if (strlen(arg)>0)
        {
                for (int counter = 0; counter<strlen(arg) && !error; counter++)
                {
                        switch (arg[counter])
                        {
                                case 'R':
                                        break;
                                case 'r':
                                        break;
                                case 'W':
                                        break;
                                case 'w':
                                        break;
                                default:
                                        error = true;
                        }
                }
        } else
        {
                error = true;
        }
        if (error)
        {
                return false;
        } else
        {
                return true;
        }
}

void parser(char* arg)
{
        for (int counter = 0; counter<strlen(arg); counter++)
        {
                switch (arg[counter])
                {
                        case 'R':
                                read();
                                break;
                        case 'r':
                                sread();
                                break;
                        case 'W':
                                write();
                                break;
                        case 'w':
                                swrite();
                                break;
                }
        }
}

void read()
{
  std::cout << "Lectura" << std::endl;
}

void sread()
{
  std::cout << "Lectura inteligente" << std::endl;
}

void write()
{
  std::cout << "Escritura" << std::endl;
}

void swrite()
{
  std::cout << "Escritura inteligente" << std::endl;
}
