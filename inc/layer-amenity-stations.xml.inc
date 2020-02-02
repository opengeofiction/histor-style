<Style name="stations">
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='subway_entrance'</Filter>
      <PointSymbolizer file="&symbols;/walking.n.12.png" placement="interior"/>
    </Rule>
	<!-- undefinierte Eisenbahnstation -->
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[railway]='station' and not ([disused] = 'yes' or [service]='main' or [service]='local' or [service]='metro') </Filter>
      <PointSymbolizer file="&symbols;/station08.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='station' and not ([disused] = 'yes' or [service]='main' or [service]='local' or [service]='metro') </Filter>
      <PointSymbolizer file="&symbols;/station11.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      <Filter>[railway]='station' and [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/station_disused.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and not ([disused] = 'yes' or [service]='main' or [service]='local' or [service]='metro') </Filter>
      <PointSymbolizer file="&symbols;/station11.png" placement="interior"/>
    </Rule>
	<!-- Hi-speed Eisenbahnstation -->
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[railway]='station' and [service]='main' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/hi_speed08.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
       <Filter>[railway]='station' and [service]='main' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/hi_speed11.png" placement="interior"/>
    </Rule>
	<!-- Vorortsverkehr, Commuter, S-Bahn -->
     <Rule>
      &maxscale_zoom11;
      &minscale_zoom11;
      <Filter>[railway]='station' and [service]='local' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/local08.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom13;
       <Filter>[railway]='station' and [service]='local' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/local10.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
       <Filter>[railway]='station' and [service]='local' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/local13.png" placement="interior"/>
    </Rule>
	<!-- Untergrundbahnstation, Metro -->
     <Rule>
      &maxscale_zoom11;
      &minscale_zoom11;
      <Filter>[railway]='station' and [service]='metro' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[railway]='station' and [service]='metro' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/metro08.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[railway]='station' and [service]='metro' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/metro10.png" placement="interior"/>
    </Rule>
	<!-- kleinere Bahnen -->
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='halt' or [aerialway]='station'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='halt' or [aerialway]='station'</Filter>
      <PointSymbolizer file="&symbols;/station_small.png" placement="interior"/>
    </Rule>
    <!-- Strassenbahn-Haltestelle 26.01.2020 -->
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[railway]='tram_stop'</Filter>
      <PointSymbolizer file="&symbols;/tram4.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway]='tram_stop'</Filter>
      <PointSymbolizer file="&symbols;/tram6.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[railway]='busline_stop'</Filter>
      <PointSymbolizer file="&symbols;/bus4.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway]='busline_stop'</Filter>
      <PointSymbolizer file="&symbols;/bus6.png" placement="interior"/>
    </Rule>
	<!-- Textsymbolisierungen kleine Bahnen -->
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='halt' or [aerialway]='station'</Filter>
      <TextSymbolizer size="8" fill="#66f" dy="-8" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='halt' or [aerialway]='station'</Filter>
      <TextSymbolizer size="10" fill="#66f" dy="-10" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <!-- Textsymbolisierung Straßenbahnhaltestelle 26.01.2020 / und Bus 27.01.2020 -->
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[railway]='tram_stop'</Filter>
      <TextSymbolizer size="8" fill="red" dy="-8" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway]='tram_stop'</Filter>
      <TextSymbolizer size="10" fill="red" dy="-10" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
   <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <Filter>[railway]='busline_stop'</Filter>
      <TextSymbolizer size="8" fill="green" dy="-8" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway]='busline_stop'</Filter>
      <TextSymbolizer size="10" fill="green" dy="-10" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
	<!-- Textsymbolisierung Eisenbahn  -->
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <TextSymbolizer size="9" fill="#66f" dy="-8" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <TextSymbolizer size="11" fill="#66f" dy="-10" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and [disused]='yes'</Filter>
      <TextSymbolizer size="9" fill="grey" dy="-9" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
</Style>
<Layer name="amenity-stations" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name,railway,aerialway,disused,service
      from &prefix;_point
      where railway in ('station','halt','tram_stop','busline_stop','subway_entrance')
         or aerialway='station'
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="amenity-stations-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name,railway,aerialway,disused,service
      from &prefix;_polygon
      where railway in ('station','halt','tram_stop','busline_stop')
         or aerialway='station'
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

