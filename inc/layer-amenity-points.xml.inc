<!-- histor-style 1-2020, lauffähig 21.02.2020 -->
<Style name="points">
<!-- Civic Services -->
    <Rule>
      &maxscale_zoom14;
      <Filter>[amenity]='townhall'</Filter>
      <PointSymbolizer file="&symbols;/townhall.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='courthouse'</Filter>
      <PointSymbolizer file="&symbols;/amenity_court.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='police'</Filter>
      <PointSymbolizer file="&symbols;/police.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='post_box'</Filter>
      <PointSymbolizer file="&symbols;/post_box.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='post_office'</Filter>
      <PointSymbolizer file="&symbols;/postoffice.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='fire_station'</Filter>
      <PointSymbolizer file="&symbols;/firestation.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      <Filter>[amenity]='hospital'</Filter>
      <PointSymbolizer file="&symbols;/hospital.p.16.png" placement="interior"/>
    </Rule>
    <Rule> 
      &maxscale_zoom16; 
      <Filter>[amenity]='prison'</Filter> 
      <PointSymbolizer file="&symbols;/amenity_prison.p.20.png" placement="interior"/>
    </Rule> 
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='embassy'</Filter>
      <PointSymbolizer file="&symbols;/embassy.png" placement="interior"/>
    </Rule>
<!-- Cultural -->
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='school'</Filter>
      <PointSymbolizer file="&symbols;/school.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='cinema'</Filter>
      <PointSymbolizer file="&symbols;/cinema.p.24.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='library'</Filter>
      <PointSymbolizer file="&symbols;/library.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[tourism]='museum'</Filter>
      <PointSymbolizer file="&symbols;/museum.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='theatre'</Filter>
      <PointSymbolizer file="&symbols;/theatre.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='artwork'</Filter>
      <PointSymbolizer file="&symbols;/artwork.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='concert'</Filter>
      <PointSymbolizer file="&symbols;/concert.png" placement="interior"/>
    </Rule>
<!-- Historic -->  
    <Rule>
      &maxscale_zoom16;
      <Filter>[historic]='memorial'</Filter>
      <PointSymbolizer file="&symbols;/tourist_memorial.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      <Filter>[historic]='wreck'</Filter>
      <PointSymbolizer file="&symbols;/wreck.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[historic]='archaeological_site'</Filter>
      <PointSymbolizer file="&symbols;/tourist_archaeological2.glow.16.png" placement="interior"/>
    </Rule>  
<!-- Helper -->
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='craftsman'</Filter>
      <PointSymbolizer file="&symbols;/craftsman.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='doctor' or [amenity]='doctors'</Filter>
      <PointSymbolizer file="&symbols;/doctors.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='veterinary'</Filter>
      <PointSymbolizer file="&symbols;/veterinary.png" placement="interior"/>
    </Rule>
<!-- food, drink -->  
    <Rule>
	  &maxscale_zoom17;
	  &minscale_zoom17;
	  <Filter>[amenity]='bar' or [amenity]='cafe' or [amenity]='pub' or [amenity]='restaurant' or [amenity]='biergarten'</Filter>
	  <PointSymbolizer file="&symbols;/food_other.png" placement="interior"/>
	</Rule> 
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='nightclub'</Filter>
      <PointSymbolizer file="&symbols;/blue_note.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='bar'</Filter>
      <PointSymbolizer file="&symbols;/bar.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='cafe'</Filter>
      <PointSymbolizer file="&symbols;/cafe.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='pub'</Filter>
      <PointSymbolizer file="&symbols;/pub.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='biergarten'</Filter>
      <PointSymbolizer file="&symbols;/biergarten.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='restaurant'</Filter>
      <PointSymbolizer file="&symbols;/restaurant.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='fast_food'</Filter>
      <PointSymbolizer file="&symbols;/fast_food.png" placement="interior"/>
    </Rule>
<!-- Tourism, sleep -->   
    <Rule>
      &maxscale_zoom16;
      <Filter>[tourism]='information'</Filter>
      <PointSymbolizer file="&symbols;/information.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[tourism]='guest_house'</Filter>
      <PointSymbolizer file="&symbols;/guest_house.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[tourism]='bed_and_breakfast'</Filter>
      <PointSymbolizer file="&symbols;/bandb.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='chalet'</Filter>
      <PointSymbolizer file="&symbols;/chalet.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='hostel'</Filter>
      <PointSymbolizer file="&symbols;/hostel.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[tourism]='hotel'</Filter>
      <PointSymbolizer file="&symbols;/hotel2.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[tourism]='motel'</Filter>
      <PointSymbolizer file="&symbols;/motel.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[tourism]='caravan_site'</Filter>
      <PointSymbolizer file="&symbols;/caravan_park.p.24.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[tourism]='camp_site'</Filter>
      <PointSymbolizer file="&symbols;/camping.n.16.png" placement="interior"/>
    </Rule>
<!-- shelter, unchanged -->    
    <Rule>
      &maxscale_zoom13;
      <Filter>[tourism]='alpine_hut'</Filter>
      <PointSymbolizer file="&symbols;/alpinehut.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='shelter'</Filter>
      <PointSymbolizer file="&symbols;/shelter2.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      <Filter>[amenity]='bird_sanctuary'</Filter>
      <PointSymbolizer file="&symbols;/bird_sanctuary.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='animal_shelter'</Filter>
      <PointSymbolizer file="&symbols;/animal_shelter.png" placement="interior"/>
    </Rule>
<!-- Grosse Shops -->
    <Rule>
      &maxscale_zoom16;
      <Filter>[shop]='department_store'</Filter>
      <PointSymbolizer file="&symbols;/department_store.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[shop]='mercado'</Filter>
      <PointSymbolizer file="&symbols;/mercado.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[shop]='supermarket'</Filter>
      <PointSymbolizer file="&symbols;/supermarket.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom16;
      <Filter>[shop]='wholesale'</Filter>
      <PointSymbolizer file="&symbols;/wholesale.png" placement="interior"/>
    </Rule>
<!-- Amenities als shop ab zoom 17 -->    
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='fuel'</Filter>
      <PointSymbolizer file="&symbols;/fuel.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='atm'</Filter>
      <PointSymbolizer file="&symbols;/atm2.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bank'</Filter>
      <PointSymbolizer file="&symbols;/bank2.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='pharmacy' or [shop]='pharmacy'</Filter>
      <PointSymbolizer file="&symbols;/pharmacy.p.16.png" placement="interior"/>
    </Rule>
<!-- Hundert Sorten von Shops -->   
    <Rule>
	  &maxscale_zoom17;
	  &minscale_zoom17;
	  <Filter>[shop]!= '' and not([shop]='department_store' or [shop]='mercado' or [shop]='supermarket' or [shop]='wholesale')</Filter>
	  <PointSymbolizer file="&symbols;/shop_other.png" placement="interior"/>
	</Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='alcohol'</Filter>
      <PointSymbolizer file="&symbols;/shop_alcohol.png" placement="interior"/>
    </Rule>	 
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='bakery'</Filter>
      <PointSymbolizer file="&symbols;/shop_bakery.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='beverages'</Filter>
      <PointSymbolizer file="&symbols;/shop_beverages.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='books'</Filter>
      <PointSymbolizer file="&symbols;/shop_books.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='butcher'</Filter>
      <PointSymbolizer file="&symbols;/shop_butcher.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='chemist'</Filter>
      <PointSymbolizer file="&symbols;/shop_chemist.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='clothes' or [shop]='fashion'</Filter>
      <PointSymbolizer file="&symbols;/shop_clothes.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='computer'</Filter>
      <PointSymbolizer file="&symbols;/shop_computer.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='chocolate' or [shop]='confectionery'</Filter>
      <PointSymbolizer file="&symbols;/shop_confectionery.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='convenience'</Filter>
      <PointSymbolizer file="&symbols;/shop_convenience.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='dairy'</Filter>
      <PointSymbolizer file="&symbols;/shop_dairy.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='deli'</Filter>
      <PointSymbolizer file="&symbols;/shop_deli.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='doityourself' or [shop]='hardware'</Filter>
      <PointSymbolizer file="&symbols;/shop_diy.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='dry_cleaning'</Filter>
      <PointSymbolizer file="&symbols;/shop_dry_cleaning.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='electronics'</Filter>
      <PointSymbolizer file="&symbols;/shop_electronics.png" placement="interior"/>
    </Rule>	
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='florist' or [shop]='flowers'</Filter>
      <PointSymbolizer file="&symbols;/florist.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='furniture'</Filter>
      <PointSymbolizer file="&symbols;/shop_furniture.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom17;
      <Filter>[shop]='garden_center'</Filter>
      <PointSymbolizer file="&symbols;/shop_garden_center.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='gift'</Filter>
      <PointSymbolizer file="&symbols;/shop_gift.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='greengrocer' or [shop]='bio'</Filter>
      <PointSymbolizer file="&symbols;/shop_greengrocer.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='hairdresser'</Filter>
      <PointSymbolizer file="&symbols;/shop_hairdresser.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='hifi'</Filter>
      <PointSymbolizer file="&symbols;/shop_hifi.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='houseware'</Filter>
      <PointSymbolizer file="&symbols;/shop_houseware.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='indoor_decoration'</Filter>
      <PointSymbolizer file="&symbols;/shop_decoration.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='jewellery'</Filter>
      <PointSymbolizer file="&symbols;/shop_jewellery.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='laundry'</Filter>
      <PointSymbolizer file="&symbols;/shop_laundry.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='mobile_phone'</Filter>
      <PointSymbolizer file="&symbols;/shop_mobile_phone.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='musical_instruments'</Filter>
      <PointSymbolizer file="&symbols;/shop_musical_instruments.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='newsagent' or [shop]='kiosk'</Filter>
      <PointSymbolizer file="&symbols;/shop_newsagent.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='optician'</Filter>
      <PointSymbolizer file="&symbols;/shop_optician.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='outdoor'</Filter>
      <PointSymbolizer file="&symbols;/shop_outdoor.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='paint'</Filter>
      <PointSymbolizer file="&symbols;/shop_paint.png" placement="interior"/>
    </Rule>	
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='perfumery' or [shop]='cosmetics'</Filter>
      <PointSymbolizer file="&symbols;/shop_perfumery.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='pet'</Filter>
      <PointSymbolizer file="&symbols;/shop_pet.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='photo'</Filter>
      <PointSymbolizer file="&symbols;/shop_photo.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='seafood' or [shop]='fishmonger'</Filter>
      <PointSymbolizer file="&symbols;/shop_seafood.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='shoes'</Filter>
      <PointSymbolizer file="&symbols;/shop_shoes.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='stationery'</Filter>
      <PointSymbolizer file="&symbols;/shop_stationery.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='tabacco'</Filter>
      <PointSymbolizer file="&symbols;/shop_tabacco.png" placement="interior"/>
    </Rule>	
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='toys'</Filter>
      <PointSymbolizer file="&symbols;/shop_toys.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='travel_agency'</Filter>
      <PointSymbolizer file="&symbols;/shop_travel_agency.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom18;
      <Filter>[shop]='variety_store'</Filter>
      <PointSymbolizer file="&symbols;/shop_variety_store.png" placement="interior"/>
    </Rule>
<!-- diese drei so gelassen -->    
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='car'</Filter>
      <PointSymbolizer file="&symbols;/shopping_car.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='car_repair'</Filter>
      <PointSymbolizer file="&symbols;/shopping_car_repair.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      <Filter>[shop]='bicycle'</Filter>
      <PointSymbolizer file="&symbols;/shopping_bicycle.p.16.png" placement="interior"/>
    </Rule>
<!-- Other = all unchanged -->    
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='bicycle_rental'</Filter>
      <PointSymbolizer file="&symbols;/rental_bicycle.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[amenity]='bus_stop' or [highway]='bus_stop'</Filter>
      <PointSymbolizer file="&symbols;/bus_stop_small.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bus_stop' or [highway]='bus_stop'</Filter>
      <PointSymbolizer file="&symbols;/bus_stop.p.12.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='bus_station'</Filter>
      <PointSymbolizer file="&symbols;/bus_station.n.16.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='bus_icon'</Filter>
      <PointSymbolizer file="&symbols;/busicon.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
    &maxscale_zoom17;
    <Filter>[highway]='traffic_signals'</Filter>
    <PointSymbolizer file="&symbols;/traffic_light.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[highway]='ford'</Filter>
      <PointSymbolizer file="&symbols;/transport_ford.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='car_sharing'</Filter>
      <PointSymbolizer file="&symbols;/car_share.p.16.png" allow-overlap="false" placement="interior"/>
    </Rule> 
    <Rule>
      &maxscale_zoom15;
      <Filter>[waterway]='lock' or [lock]='yes'</Filter>
      <PointSymbolizer file="&symbols;/lock_gate.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[man_made]='mast'</Filter>
      <PointSymbolizer file="&symbols;/communications.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[man_made]='flagpole'</Filter>
      <PointSymbolizer file="&symbols;/flagpole.png" placement="interior"/>
    </Rule> 
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity] = 'parking' and ([access] = 'public' or [access] = 'yes' or not [access] != '')</Filter>
      <PointSymbolizer file="&symbols;/parking.p.16.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity] = 'parking' and ([access] != '' and not [access] = 'public' and not [access] = 'yes')</Filter>
      <PointSymbolizer file="&symbols;/parking_private.p.16.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='place_of_worship' and [religion] = 'christian'</Filter>
      <PointSymbolizer file="&symbols;/christian3.p.14.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='place_of_worship' and [religion] = 'muslim'</Filter>
      <PointSymbolizer file="&symbols;/islamic3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='place_of_worship' and [religion] = 'sikh'</Filter>
      <PointSymbolizer file="&symbols;/sikh3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='place_of_worship' and [religion] = 'jewish'</Filter>
      <PointSymbolizer file="&symbols;/jewish3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship'</Filter>
      <PointSymbolizer file="&symbols;/place_of_worship3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='recycling'</Filter>
      <PointSymbolizer file="&symbols;/recycling.p.16.png" placement="interior"/>
    </Rule>   
    <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='telephone'</Filter>
      <PointSymbolizer file="&symbols;/telephone.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='emergency_phone'</Filter>
      <PointSymbolizer file="&symbols;/sosphone.png" placement="interior"/>
    </Rule>  
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='toilets'</Filter>
      <PointSymbolizer file="&symbols;/toilets.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom18; 
      <Filter>[amenity]='drinking_water'</Filter> 
      <PointSymbolizer file="&symbols;/food_drinkingtap.p.20.png" placement="interior"/>
    </Rule> 
    <Rule>
      &maxscale_zoom15;
      <Filter>[tourism]='viewpoint'</Filter>
      <PointSymbolizer file="&symbols;/view_point.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='water_tower'</Filter>
      <PointSymbolizer file="&symbols;/tower_water.p.20.png" placement="interior"/>
    </Rule>   
    <Rule>
      &maxscale_zoom16;
      <Filter>[leisure]='playground'</Filter>
      <PointSymbolizer file="&symbols;/playground.p.20.png" placement="interior"/>
    </Rule>
     <Rule>
      &maxscale_zoom15;
      <Filter>[leisure]='golf_course'</Filter>
      <PointSymbolizer file="&symbols;/golf20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='picnic_site'</Filter>
      <PointSymbolizer file="&symbols;/picnic.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[leisure]='dog_park'</Filter>
      <PointSymbolizer file="&symbols;/dog_park.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[leisure]='slipway'</Filter>
      <PointSymbolizer file="&symbols;/transport_slipway.p.20.png" placement="interior"/>
    </Rule>
</Style>
<!-- beide Layer ungeaendert -->
<Layer name="amenity-points" status="on" srs="&osm2pgsql_projection;">
    <StyleName>points</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,amenity,shop,tourism,highway,man_made,access,religion,waterway,lock,historic,leisure
      from &prefix;_point
      where amenity is not null
         or shop is not null
         or tourism in ('alpine_hut','camp_site','caravan_site','guest_house','hostel','hotel','motel','museum','viewpoint','bed_and_breakfast','information','chalet')
         or highway in ('bus_stop','traffic_signals','ford')
         or man_made in ('mast','flagpole','water_tower')
         or historic in ('memorial','archaeological_site','wreck')
         or waterway='lock'
         or lock='yes'
         or leisure in ('playground','slipway','dog_park')
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="amenity-points-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>points</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,amenity,shop,tourism,highway,man_made,access,religion,waterway,lock,historic,leisure
      from &prefix;_polygon
      where amenity is not null
         or shop is not null
         or tourism in ('alpine_hut','camp_site','caravan_site','guest_house','hostel','hotel','motel','museum','viewpoint','bed_and_breakfast','information','chalet')
         or highway in ('bus_stop','traffic_signals')
         or man_made in ('mast','flagpole','water_tower')
         or historic in ('memorial','archaeological_site','wreck')
         or leisure in ('playground','dog_park')
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
