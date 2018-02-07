// AHMAD FARHAN SULAIMAN BIN ZULRAIMI
// A17DW1185
#include <iostream>
#include <string>

using namespace std;
class Log
{
    public:
        int LogLevelWarning=0;
        int LogLevelError=1;
        int LogLevelInfo=2;

    
	private:
        int x_LogLevel=LogLevelInfo;
    
	public:

      //function
        void SetLogLevel(int level){
            x_LogLevel=level;
        }

        //error
        int Error(const char* message)
        {
          if(x_LogLevel>=LogLevelError)
          cout<<"[ERROR]: "<<message<<endl;
        }
        
		//warn
        int Warning(const char* message)
        {
          if(x_LogLevel>=LogLevelWarning)
          cout<<"[WARNING]: "<<message<<endl;
        }
        
		//Info
        int Info(const char* message)
        {
          if(x_LogLevel>=LogLevelInfo)
          cout<<"[INFO]: "<<message<<endl;
        }
};



int main()

{
    Log log;
    log.SetLogLevel(log.LogLevelWarning);
    log.Warning("Hello! its a warning!!!");
    log.SetLogLevel(log.LogLevelError);
    log.Error("Your Programme has an error! Please fix it !");
    log.SetLogLevel(log.LogLevelInfo);
    log.Info("Fix it!!!");
}
