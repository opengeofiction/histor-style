<Style name="industry">
<!-- Bergwerke -->
	 <Rule>
      &maxscale_zoom9;
      &minscale_zoom11;
      <Filter>[man_made]='coal'</Filter>
      <PointSymbolizer file="&symbols;/coal15.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      <Filter>[man_made]='coal'</Filter>
      <PointSymbolizer file="&symbols;/coal25.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
	<Rule>
      &maxscale_zoom9;
      &minscale_zoom11;
      <Filter>[man_made]='copper'</Filter>
      <PointSymbolizer file="&symbols;/copper15.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      <Filter>[man_made]='copper'</Filter>
      <PointSymbolizer file="&symbols;/copper25.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
	<Rule>
      &maxscale_zoom9;
      &minscale_zoom11;
      <Filter>[man_made]='metal'</Filter>
      <PointSymbolizer file="&symbols;/metal15.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      <Filter>[man_made]='metal'</Filter>
      <PointSymbolizer file="&symbols;/metal25.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom11;
      <Filter>[man_made]='mineral_water'</Filter>
      <PointSymbolizer file="&symbols;/minwater15.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      <Filter>[man_made]='mineral_water'</Filter>
      <PointSymbolizer file="&symbols;/minwater25.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
	  &minscale_zoom12;
      <Filter>[man_made]='borehole'</Filter>
      <PointSymbolizer file="&symbols;/oil09.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      <Filter>[man_made]='borehole'</Filter>
      <PointSymbolizer file="&symbols;/oil15.png" placement="interior"/>
    </Rule>
<Style name="seamarks">
<!-- Hafensymbol -->
     <Rule>
      &maxscale_zoom8;
      &minscale_zoom8;
      <Filter>[harbour]='main'</Filter>
      <PointSymbolizer file="&symbols;/harbour11.png"/>
      <TextSymbolizer size="6" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
     </Rule>
      <Rule>
      &maxscale_zoom9;
      &minscale_zoom10;
      <Filter>[harbour]='main'</Filter>
      <PointSymbolizer file="&symbols;/harbour16.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
     </Rule>
     <Rule>
      &maxscale_zoom11;
      &minscale_zoom14;
      <Filter>[harbour]='main'</Filter>
      <PointSymbolizer file="&symbols;/harbour24.png"/>
      <TextSymbolizer size="11" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
      </Rule>
      <Rule>
      &maxscale_zoom10;
      &minscale_zoom14;
      <Filter>[harbour]='navy'</Filter>
      <PointSymbolizer file="&symbols;/navy24.png"/>
      <TextSymbolizer size="11" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
      </Rule>
      <Rule>
      &maxscale_zoom10;
      &minscale_zoom11;
      <Filter>[harbour]='middle'</Filter>
      <PointSymbolizer file="&symbols;/harbour11.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom15;
      <Filter>[harbour]='middle'</Filter>
      <PointSymbolizer file="&symbols;/harbour16.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
      <Rule>
      &maxscale_zoom13;
      <Filter>[harbour]='small'</Filter>
      <PointSymbolizer file="&symbols;/harbour11.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
<!-- Bojen, Seemarken -->
    <Rule>
      &maxscale_zoom15;
      <Filter>[man_made]='buoyred'</Filter>
      <PointSymbolizer file="&symbols;/buoyred.png" placement="interior"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[man_made]='buoygreen'</Filter>
      <PointSymbolizer file="&symbols;/buoygreen.png" placement="interior"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[man_made]='buoyyellow'</Filter>
      <PointSymbolizer file="&symbols;/buoyyellow.png" placement="interior"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[man_made]='container'</Filter>
      <PointSymbolizer file="&symbols;/container.png" placement="interior"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-24" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[man_made]='beacon'</Filter>
      <PointSymbolizer file="&symbols;/beacon.png" placement="interior"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[man_made]='wreck'</Filter>
      <PointSymbolizer file="&symbols;/wreck.png" placement="interior"/>
      <TextSymbolizer size="11" fill="#6692da" dy="-24" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
</Style>

<Layer name="seamarks" status="on" srs="&osm2pgsql_projection;">
    <StyleName>seamarks/StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_point
      where harbour in ('main','navy','middle','small')
         or man_made in ('buoyred','buoygreen','buoyyellow','beacon','container','wreck')
      ) as seamarks</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="seamarks-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>seamarks</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_polygon
      where harbour in ('main','navy','middle','small')
         or man_made in ('buoyred','buoygreen','buoyyellow','beacon','container','wreck')
      ) as seamarks</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="industry" status="on" srs="&osm2pgsql_projection;">
    <StyleName>industry</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_point
      where man_made in ('coal','copper','metal','mineral_water','borehole')
      ) as industry</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="industry-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>industry</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_polygon
      where man_made in ('coal','copper','metal','mineral_water','borehole')
      ) as industry</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
