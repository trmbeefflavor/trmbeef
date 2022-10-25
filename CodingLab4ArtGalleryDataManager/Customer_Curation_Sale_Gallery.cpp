//
//  Customer_Curation_Sale_Gallery.cpp
//  ArtGallerySimplified
//
//  implement/define the member functions of the following classes:
//     1. class Customer; 2. class Curation; 3. class Sale; 4. class ArtGallery
//
//created by: [your name]
//date:  

#include "Customer_Curation_Sale_Gallery.h"
#include <algorithm>
#include <chrono>
#include <ctime>
#include <iomanip>



namespace NS_ARTGALLERY {

	//  implement/define the member functions of the following classes:
   //     1. class Customer; 2. class Curation; 3. class Sale; 4. class ArtGallery
	// default constructor: Customer class
	Customer::Customer() {
		ID = -1;
		name = "na";
		email = "na";
		address = "na";
	}
	// accessor functions for Customer class
	int Customer::getID() const {
		return ID;
	}
	std::string Customer::getName() const {
		return name;
	}
	std::string Customer::getEmail() const {
		return email;
	}
	std::string Customer::getAddress() const {
		return address;
	}
	// mutator functions for Customer class
	void Customer::setID(int theID) {
		ID = theID;
	}
	void Customer::setName(string theName) {
		name = theName;
	}
	void Customer::setEmail(string theEmail) {
		email = theEmail;
	}
	void Customer::setAddress(string theAddress) {
		address = theAddress;
	}
	// default constructor: Curation class
	Curation::Curation() {
		artworkID = -1;
		artistID = -1;
		curationDate = { 1,1,2022 };
	}
	// accessors for Curation class
	int Curation::getArtworkID() const {
		return artworkID;
	}
	int Curation::getArtistID() const {
		return artistID;
	}
	Date Curation::getCurationDate() const {
		return curationDate;
	}
	// mutators for Curation class
	void Curation::setArtworkID(int theID) {
		artworkID = theID;
	}
	void Curation::setArtistID(int theID) {
		artistID = theID;
	}
	void Curation::setCurationDate(Date theDate) {
		curationDate = theDate;
	}
	// default constructor: Sale class
	Sale::Sale() {
		customerID = -1;
		artworkID = -1;
		saleDate = { 1,1,2022 };
	}
	// accessors for Sale class
	int Sale::getCustomerID() const {
		return customerID;
	}
	int Sale::getArtworkID() const {
		return artworkID;
	}
	Date Sale::getSaleDate() const {
		return saleDate;
	}
	// mutators for Sale Class
	void Sale::setCustomerID(int theID) {
		customerID = theID;
	}
	void Sale::setArtworkID(int theID) {
		artworkID = theID;
	}
	void Sale::setSaleDate(Date theDate) {
		saleDate = theDate;
	}
	// default constructor: Gallery class
	Gallery::Gallery() {
		ID = -1;
		name = "na";
		address = "na";
		webURL = "na";
	}
	// accessors for Gallery class
	int Gallery::getID() const {
		return ID;
	}
	std::string Gallery::getName() const {
		return name;
	}
	std::string Gallery::getAddress() const {
		return address;
	}
	std::string Gallery::getWebURL() const {
		return webURL;
	}
	unsigned long Gallery::num_artists() const {
		return artistsList.size();
	}
	unsigned long Gallery::num_artworksCurated() const {
		return artworksCurated.size();
	}
	unsigned long Gallery::num_artworksForSale() const {
		return artworksForSale.size();
	}
	unsigned long Gallery::num_customers() const {
		return customersList.size();
	}
	unsigned long Gallery::num_curations() const {
		return curationsRecords.size();
	}
	unsigned long Gallery::num_sales() const {
		return salesRecords.size();
	}
	int Gallery::getArtistID(std::string name, std::string email) const {
		int artistID;
		bool check;
		auto itr = std::find_if(artistsList.begin(), artistsList.end(), [&](Artist p) {
			if (p.getName() == name && p.getEmail() == email) {
				artistID = p.getID();
				check = false;
				return check;
			}
			else
				check = true;
				return check;
			});
		if (check) {
			return -1;
		}
		else {
			return artistID;
		}
	}
	int Gallery::getCustomerID(std::string name, std::string email) const {
		int customerID;
		bool check;
		auto itr = std::find_if(customersList.begin(), customersList.end(), [&](Customer p) {
			if (p.getName() == name && p.getEmail() == email) {
				customerID = p.getID();
				check = false;
				return check;
			}
			else {
				check = true;
				return check;
			}
			});
		if (check) {
			return -1;
		}
		else {
			return customerID;
		}
	}
	vector<int> Gallery::getIDsOfArtworksForSale() const {
		vector<int> artworkIDs;
		for (auto& it : artworksForSale) {
			artworkIDs.push_back(it.getID());
		}
		return artworkIDs;
	}
	vector<int> Gallery::getIDsOfArtistsForSale() const {
		vector<int> artistIDs;
		for (auto& it : artistsList) {
			artistIDs.push_back(it.getID());
		}
		return artistIDs;
	}
	bool isArtType(ReportType type) {
		if (type == ReportType::artType) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isArtStyle(ReportType type) {
		if (type == ReportType::artStyle) {
			return true;
		}
		else {
			return false;
		}
	}
	bool isArtSubject(ReportType type) {
		if (type == ReportType::artSubject) {
			return true;
		}
		else {
			return false;
		}
	}
	vector<pair<string, int>> Gallery::genArtworksReport(ReportType reportType) {
		vector<pair<string, int>> artReport;
		bool check;
		int count;
		ArtType type;
		ArtStyle style;
		ArtSubject subject;
		if (reportType == ReportType::artType) {
			auto itr1 = std::find_if(artworksCurated.begin(), artworksCurated.end(), [&](Artwork p) {
				//type = p;
				return check;
				});
			if (check) {
				count = std::count_if(artworksCurated.begin(), artworksCurated.end(), ArtType(type));
				artReport.push_back(std::make_pair(toStr_ArtType(type), count));	
			}
		}
		if (reportType == ReportType::artStyle) {
			auto itr1 = std::find_if(artworksCurated.begin(), artworksCurated.end(), [&](Artwork p) {
				//style = p;
				return check;
				});
			if (check) {
				count = std::count_if(artworksCurated.begin(), artworksCurated.end(), ArtStyle(type));
				artReport.push_back(std::make_pair(toStr_ArtStyle(style), count));
			}
		}
		if (reportType == ReportType::artSubject) {
			auto itr1 = std::find_if(artworksCurated.begin(), artworksCurated.end(), [&](Artwork p) {
				//subject = p;
				return check;
				});
			if (check) {
				count = std::count_if(artworksCurated.begin(), artworksCurated.end(), ArtSubject(type));
				artReport.push_back(std::make_pair(toStr_ArtSubject(subject), count));
			}
		}
		return artReport;
	}

	// mutators for Gallery class
	void Gallery::setID(int theID) {
		ID = theID;
	}
	void Gallery::setName(std::string theName) {
		name = theName;
	}
	void Gallery::setAddress(std::string theAddr) {
		address = theAddr;
	}
	void Gallery::setWebURL(std::string theURL) {
		webURL = theURL;
	}

	int Gallery::addArtist(Artist artist) {
		bool check;
		auto itr = std::find_if(artistsList.begin(), artistsList.end(), [&](Artist p) {
			if (p.getName() == artist.getName() && p.getEmail() == artist.getEmail()) {
				check = true;
				return check;
			}
			});
		if (check != true) {
			artistsList.push_back(artist);
		}
		artist.setID(uniqueIDs::next_artistID());
		return artist.getID();
	}
	int Gallery::addCustomer(Customer customer) {
		bool check;
		auto itr = std::find_if(customersList.begin(), customersList.end(), [&](Customer p) {
			if (p.getName() == customer.getName() && p.getEmail() == customer.getEmail()) {
				check = true;
				return check;
			}
			});
		if (check != true) {
			customer.setID(uniqueIDs::next_customerID());
			customersList.push_back(customer);
		}	
		return customer.getID();
	}
	void Gallery::curateArtwork(Artwork newItem, Artist artist) {
		newItem.setID(uniqueIDs::next_artworkID());
		newItem.setArtistID(addArtist(artist));
		artworksCurated.push_back(newItem);
		artworksForSale.push_back(newItem);
		Curation newCuration;
		
		newCuration.setArtworkID(newItem.getID());
		newCuration.setArtistID(artist.getID());
		newCuration.setCurationDate(getTodaysDate());
		addCuration(newCuration);
	}
	void Gallery::sellArtwork(int artworkID, Customer customer) {
		addCustomer(customer);
		bool check;
		Artwork artwork;
		auto itr = std::find_if(artworksForSale.begin(), artworksForSale.end(), [&](Artwork p) {
			if (p.getID() == artworkID) {
				check = true;
				artwork = p;
				return check;
			}
			});
		if (check) {
			auto itr = std::remove(artworksForSale.begin(), artworksForSale.end(), artwork);
		}

	}
	void Gallery::addCuration(Curation curation) {
		curationsRecords.push_back(curation);
	}
	void Gallery::addSale(Sale sale) {
		salesRecords.push_back(sale);
	}

	}//end of NS_ARTGALLERY