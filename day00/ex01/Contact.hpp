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
		void		getCompleteInfos(void) const;
	private:
		std::string _truncInfo(std::string value);

		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif