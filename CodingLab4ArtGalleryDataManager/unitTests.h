//
//  unitTests.h
//  ArtGallerySimplified
//
//unit-test a few member functions for each class
//
//  Created by Hui Yang on 3/23/22.
//

#ifndef unitTests_h
#define unitTests_h

#include "Artwork_Artist.h"
#include "Customer_Curation_Sale_Gallery.h"

namespace NS_UTESTS {

	using namespace NS_ARTGALLERY;

	//class Artwork; a partial unit testing.
	//write one unit test each for the following member functions of the Artwork class
	//  . default constructor and accessors --->bool test_Artwork();
	//  . setStyle() and getStyle()    --->bool test_set_getStyle_Artwork();
	//  . setDimension(), getWidth(), getHeight() and getDepth() --->bool test_setDimension_Artwork();
	bool test_Artwork(Artwork testArtwork) {
		if (testArtwork.getID() == -1 && testArtwork.getArtistID() == -1 && testArtwork.getType() == ArtType::painting &&
			testArtwork.getStyle() == ArtStyle::fineArt && testArtwork.getSubject() == ArtSubject::nature &&
			testArtwork.getYearMade() == 2022 && testArtwork.getWidth() == 0.00 && testArtwork.getHeight() == 0.00 &&
			testArtwork.getDepth() == 0.00 && testArtwork.getPrice() == 0.00) {
			std::cout << "test_Artwork passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_Artwork failed" << std::endl;
			return false;
		}
	}
	bool test_set_getStyle(ArtStyle testArtStyle) {
		Artwork artwork;
		artwork.setStyle(testArtStyle);
		if (artwork.getStyle() == testArtStyle) {
			std::cout << "test_set_getStyle passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_set_getStyle failed" << std::endl;
			return false;
		}
	}
	bool test_setDimensionArtwork(double testW, double testH, double testD) {
		Artwork artwork;
		artwork.setDimension(testW, testH, testD);
		if (artwork.getWidth() == testW && artwork.getHeight() == testH && artwork.getDepth() == testD) {
			std::cout << "test_setDimensionArtwork passed!" << std::endl;
			return true;
		}
		else {
			std::cout << "test_setDimensionArtwork failed" << std::endl;
			return false;
		}
	}
	//class Artist; a partial unit testing.
	//write one unit test each for the following member functions of the Artist class
	// .default constructor and accessors -->bool test_Artist();
	// .setID() and getID()--->bool test_set_getID_Artist();
	bool test_Artist() {
		Artist artist;
		if (artist.getID() == -1 && artist.getEmail() == "na" &&
			artist.getBirthYear() == 1990 && artist.getBirthPlace() == "na" &&
			artist.getPrimaryArtType() == ArtType::painting) {
			std::cout << "test_Artist passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_Artist failed" << std::endl;
			return false;
		}
	}
	bool test_set_getID_Artist(int testID) {
		Artist testArtist;
		testArtist.setID(testID);
		if (testArtist.getID() == testID) {
			std::cout << "test_set_getID_Artist passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_set_getID_Artist failed" << std::endl;
			return false;
		}
		
	}
	//class Customer; a partial unit testing.
	//write one unit test each for the following member functions of the Customer class
	// .the parameterized constructor and accessors -->bool test_Customer2();
	// .setName() and getName()--->bool test_set_getName_Customer();
	bool test_Customer2() {
		Customer testCustomer(-1, "na", "na", "na");
		if (testCustomer.getID() == -1 && testCustomer.getName() == "na" && testCustomer.getEmail()
			== "na" && testCustomer.getAddress() == "na") {
			std::cout << "test_Customer2 passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_Customer2 failed" << std::endl;
			return false;
		}
	}

	bool test_set_getName_Customer(std::string testName) {
		Customer testCustomer;
		testCustomer.setName(testName);
		if (testCustomer.getName() == testName) {
			std::cout << "test_set_getName_Customer passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_set_getName_Customer failed" << std::endl;
			return false;
		}
	}


	//class Curation; a partial unit testing.
	//write one unit test each for the following member functions of the Curation class
	// .the parameterized constructor and accessors -->bool test_Curation2();
	// .setCurationDate() and getCurationDate()--->bool test_set_getDate_Curation();

	bool test_Curation2() {
		Curation testCuration(-1, -1, { 1,1,2022 });
		if (testCuration.getArtworkID() == -1 && testCuration.getArtistID() == -1 &&
			testCuration.getCurationDate() == Date{ 1, 1, 2022 }) {
			std::cout << "test_Curation2 passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_Curation2 failed" << std::endl;
			return false;
		}
	}

	//class Sale; a partial unit testing.
	//write one unit test each for the following member functions of the Sale class
	// .the parameterized constructor and accessors -->bool test_Sale2();
	// .setCustomerID() and getCustomerID()--->bool test_set_getCustomerID_Sale();
	bool test_Sale2() {
		Sale testSale(-1, -1, { 1, 1, 2022 });
		if (testSale.getCustomerID() == -1 && testSale.getArtworkID() == -1 && testSale.getSaleDate()
			== Date{ 1, 1, 2022 }) {
			std::cout << "test_Sale2 passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_Sale2 failed" << std::endl;
			return false;
		}
	}
	bool test_set_getCustomerID_Sale(int testCustomerID) {
		Sale testSale;
		testSale.setCustomerID(testCustomerID);
		if (testSale.getCustomerID() == testCustomerID) {
			std::cout << "test_set_getCustomerID_Sale passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_set_getCustomerID_Sale" << std::endl;
			return false;
		}
	}
	//class Gallery; a partial unit testing.
	//write one unit test for the Gallery::getArtistID() function correspoinding to either of the two scenarios: exist/doesn't exist
	//  bool test_getArtistID_Gallery();
	bool test_getArtistID_Gallery(std::string testName, std::string testEmail) {
		Gallery testGallery;
		int testID = testGallery.getArtistID(testName, testEmail);
		if (testID > 0) {
			std::cout << "test_getArtistID_Gallery artist does not exist" << std::endl;
			return true;
		}
		else {
			std::cout << "test_getArtistID_Gallery artist exists" << std::endl;
			return false;
		}
	}

	//write one unit test for the Gallery::getCustomerID() function, correspoinding to either of the two scenarios: exist/doesn't exist
	//  bool test_getCustomerID_Gallery();
	bool test_getCustomerID_Gallery(std::string testName, std::string testEmail) {
		Gallery testGallery;
		int testID = testGallery.getCustomerID(testName, testEmail);
		if (testID > 0) {
			std::cout << "test_getCustomerID_Gallery customer does not exist" << std::endl;
			return true;
		}
		else {
			std::cout << "test_getCustomerID_Gallery customer exists" << std::endl;
			return false;
		}
	}

	//write one unit test for the Gallery::getIDsOfArtworksForSale() function. Make sure your artworksForSale is not empty.
	// bool test_getIDsOfArtistsForSale_Gallery();
	bool test_getIDsOfArtworksForSale_Gallery(std::string testName, std::string testEmail) {
		Gallery gallery;
		Artwork testArtwork;
		Artist testArtist;
		
		gallery.curateArtwork(testArtwork, testArtist);

		if (gallery.num_artworksForSale() > 0) {
			std::cout << "test_getIDsOfArtworksForSale_Gallery passed" << std::endl;
			for (auto itr : gallery.getIDsOfArtworksForSale()) {
				std::cout << itr << std::endl;
			}
			return true;
		}
		else {
			std::cout << "test_getIDsOfArtworksForSale_Gallery failed" << std::endl;
			return false;
		}		
	}
	//write one unit test for the Gallery::getIDsOfArtistsForSale() function. Make sure your num_artists is not empty. This test will call the curateArtwork() function.
	// bool test_getIDsOfArtistsForSale_Gallery();
	bool test_getIDsOfArtistsForSale_Gallery(std::string testName, std::string testEmail) {
		Gallery gallery;
		Artwork testArtwork;
		Artist testArtist;

		gallery.curateArtwork(testArtwork, testArtist);

		if (gallery.num_artists() > 0) {
			std::cout << "test_getIDsOfArtistsForSale_Gallery passed" << std::endl;
			for (auto itr : gallery.getIDsOfArtistsForSale()) {
				std::cout << itr << std::endl;
			}
			return true;
		}
		else {
			std::cout << "test_getIDsOfArtistsForSale_Gallery failed" << std::endl;
			return false;
		}
	}


	//write one unit test for the genArtworksReport() based on ArtType
	//   bool test_genArtworksReport_artType_Gallery();

	bool test_genArtworksReport_artType_Gallery() {
		Gallery testGallery;
		ReportType testReport = ReportType::artType;
		vector<pair<string, int>> testArtReport;
		testArtReport = testGallery.genArtworksReport(testReport);
		if (testArtReport.size() > 0) {
			std::cout << "test_genArtworksReport_artType_Gallery passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_genArtworksReport_artType_Gallery failed" << endl;
			return false;
		}
	}


	// Write one unit test for Gallery::curateArtwork(). 
	//  bool test_curateArtwork_Gallery();
	bool test_curateArtwork_Gallery() {
		Gallery testGallery;
		Artwork testItem;
		Artist testArtist;
		
		testGallery.curateArtwork(testItem, testArtist);
		if (testGallery.num_artworksCurated() > 0) {
			std::cout << "test_curateArtwork_Gallery passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_curateArtwork_Gallery failed" << std::endl;
			return false;
		}
	}

	//write one unit test for the Gallery::sellArtwork() function
	//  bool test_sellArtwork_Gallery();
	bool test_sellArtwork_Gallery() {
		Gallery testGallery;
		Customer testCustomer;
		Artwork testItem;
		Artist testArtist;

		testGallery.curateArtwork(testItem, testArtist);
		testGallery.sellArtwork(testItem.getID(), testCustomer);

		if (testGallery.num_artworksForSale() > 0) {
			std::cout << "test_sellArtwork_Gallery passed" << std::endl;
			return true;
		}
		else {
			std::cout << "test_sellArtwork_Gallery failed" << std::endl;
			return false;
		}
	}
}//end-of namespace NS_UTESTS
#endif