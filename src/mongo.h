#ifndef __mongo_H__
#define __mongo_H__

class Mongo{
	private:
		std::string name_;
		mongo::DBClientConnection* connection_;
		
	public:
		Mongo();
        void addUser(std::string pseudo, float money);
};

#endif /* __mongo_H__ */
