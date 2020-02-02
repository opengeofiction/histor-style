<Style name="ferry-routes">
    <Rule>
      &maxscale_zoom5;
      &minscale_zoom10;
      <LineSymbolizer stroke="#66f" stroke-width="0.5" stroke-dasharray="4,4"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      <LineSymbolizer stroke="#66f" stroke-width="0.8" stroke-dasharray="6,6"/>
    </Rule>
</Style>
<!-- Service-Markierung der Ferry -->
<Style name="ferry-service">
	<Rule>
      &maxscale_zoom6;
	  &minscale_zoom9;
      <Filter>[service]='shipping'</Filter>
      <PointSymbolizer file="&symbols;/ship20.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom10;
	  &minscale_zoom11;
      <Filter>[service]='shipping'</Filter>
      <PointSymbolizer file="&symbols;/ship30.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom12;
	  &minscale_zoom18;
      <Filter>[service]='shipping'</Filter>
      <PointSymbolizer file="&symbols;/ship45.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom9;
	  &minscale_zoom18;
      <Filter>[service]='car'</Filter>
      <PointSymbolizer file="&symbols;/car20.png" placement="interior"/>
    </Rule>
	<Rule>
      &maxscale_zoom11;
	  &minscale_zoom18;
      <Filter>[service]='no_car' or [service]='nocar'</Filter>
      <PointSymbolizer file="&symbols;/no_car.png" placement="interior"/>
    </Rule>
<!-- Textsymbolisierung Shipping-line -->
    <Rule>
      &maxscale_zoom8;
      &minscale_zoom14;
      <Filter>[service]='shipping'</Filter>
      <TextSymbolizer size="8" fill="#66f" dy="-8" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
	<Rule>
      &maxscale_zoom10;
      &minscale_zoom17;
      <Filter>[service]='car'</Filter>
      <TextSymbolizer size="8" fill="#66f" dy="-8" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
	<Rule>
      &maxscale_zoom11;
      &minscale_zoom17;
      <Filter>[service]='no_car'</Filter>
      <TextSymbolizer size="8" fill="#66f" dy="-8" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
</Style>	
<!-- LAYERS -->
<Layer name="ferry-routes" status="on" srs="&osm2pgsql_projection;">
    <StyleName>ferry-routes</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way from &prefix;_line where route='ferry') as routes
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="ferry-service" status="on" srs="&osm2pgsql_projection;">
    <StyleName>ferry-service</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,service,name
      from &prefix;_point
      where service in ('shipping','car','no_car')
      ) as symbols
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
