#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
	public:
		Contact 	newContact(void);
		void		getInfos(void);
		void		getCompleteInfos(void);
	private:
		std::string truncInfo(std::string value);

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif