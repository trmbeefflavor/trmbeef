//
//  Artwork_Artist.cpp
//  ArtGallerySimplified
//
//  implement/define the functions declared in "Artwork_Artist.h"
//
//created by [ your name ] 
//date: 
#include <string>
#include "Artwork_Artist.h"

namespace NS_ARTGALLERY {

	//***implement all the functions declared in "Artwork_Artist.h"
	Artist::Artist() {
		ID = -1;
		name = "na";
		email = "na";
		birthYear = 1990;
		birthPlace = "na";
		primaryArtType = ArtType::painting;
	}

	Artwork::Artwork() {
		ID = -1;
		artistID = -1;
		type = ArtType::painting;
		style = ArtStyle::fineArt;
		subject = ArtSubject::nature;
		yearMade = 2022;
		width = 0.00;
		height = 0.00;
		depth = 0.00;
		price = 0.00;
	}

	// artwork class accessors
	int Artwork::getID() const {
		return  ID;
	}
	int Artwork::getArtistID() const {
		return artistID;
	}
	ArtType Artwork::getType() const {
		return type;
	}
	ArtStyle Artwork::getStyle() const {
		return style;
	}
	ArtSubject Artwork::getSubject() const {
		return subject;
	}
	int Artwork::getYearMade() const {
		return yearMade;
	}
	double Artwork::getWidth() const {
		return width;
	}
	double Artwork::getHeight() const {
		return height;
	}
	double Artwork::getDepth() const {
		return depth;
	}
	double Artwork::getPrice() const {
		return price;
	}
	// artwork class mutators
	void Artwork::setID(int newID) {
		ID = newID;
	}
	void Artwork::setArtistID(int newID) {
		artistID = newID;
	}
	void Artwork::setType(ArtType theType) {
		type = theType;
	}
	void Artwork::setStyle(ArtStyle theStyle) {
		style = theStyle;
	}
	void Artwork::setSubject(ArtSubject theSubject) {
		subject = theSubject;
	}
	void Artwork::setYearMade(int year) {
		yearMade = year;
	}
	void Artwork::setDimension(double w, double h, double d) {
		width = w;
		height = h;
		depth = d;
	}
	void Artwork::setPrice(double thePrice) {
		price = thePrice;
	}
	// artist class accessors
	int Artist::getID() const {
		return ID;
	}
	std::string Artist::getName() const {
		return name;
	}
	std::string Artist::getEmail() const {
		return email;
	}
	int Artist::getBirthYear() const {
		return birthYear;
	}
	std::string Artist::getBirthPlace() const {
		return birthPlace;
	}
	ArtType Artist::getPrimaryArtType() const {
		return primaryArtType;
	}
	// artist class mutators
	void Artist::setID(int theID) {
		ID = theID;
	}
	void Artist::setName(string theName) {
		name = theName;
	}
	void Artist::setEmail(string theEmail) {
		email = theEmail;
	}void Artist::setBirthYear(int theYear) {
		birthYear = theYear;
	}
	void Artist::setBirthPlace(string thePlace) {
		birthPlace = thePlace;
	}
	void Artist::setPrimaryArtType(ArtType theType) {
		primaryArtType = theType;
	}
	bool operator==(const Artist& lhs, const Artist& rhs) {
		return lhs.getName() == rhs.getName();
	}
	bool operator==(const Artwork& lhs, const Artwork& rhs) {
		return lhs.getID() == rhs.getID();
	}


}//end-of NS_ARTGALLERY
