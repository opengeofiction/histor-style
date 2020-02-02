<Style name="symbols">
<!-- Flugverkehr -->
     <Rule>
      &maxscale_zoom16;
      <Filter>[aeroway]='helipad'</Filter>
      <PointSymbolizer file="&symbols;/helipad.p.16.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-10" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom8;
      &minscale_zoom8;
      <Filter>[aeroway]='airport'</Filter>
      <PointSymbolizer file="&symbols;/airport.p.16.png"/>
    </Rule>
    <Rule>
      &maxscale_zoom9;
      &minscale_zoom9;
      <Filter>[aeroway]='airport'</Filter>
      <PointSymbolizer file="&symbols;/airport.p.16.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom12;
      <Filter>[aeroway]='airport'</Filter>
      <TextSymbolizer size="9" fill="#6692da" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom10;
      <Filter>[aeroway]='aerodrome'</Filter>
      <PointSymbolizer file="&symbols;/aerodrome.p.16.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="oblique-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[aeroway]='aerodrome'</Filter>
      <TextSymbolizer size="8" fill="#6692da" fontset-name="oblique-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
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
      &minscale_zoom9;
      <Filter>[harbour]='main'</Filter>
      <PointSymbolizer file="&symbols;/harbour16.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
     </Rule>
     <Rule>
      &maxscale_zoom10;
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
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[harbour]='container'</Filter>
      <PointSymbolizer file="&symbols;/container24.png"/>
      <TextSymbolizer size="8" fill="#6692da" dy="-24" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
      <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[harbour]='container'</Filter>
      <PointSymbolizer file="&symbols;/container40.png"/>
      <TextSymbolizer size="10" fill="#6692da" dy="-36" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>  
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
<!--  Mineralquellen  -->
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
<!-- Ölbohrungen -->
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
<!-- level crossing -->
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[railway]='level_crossing'</Filter>
      <PointSymbolizer file="&symbols;/level_crossing.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway]='level_crossing'</Filter>
      <PointSymbolizer file="&symbols;/level_crossing2.png" placement="interior"/>
    </Rule>
<!-- lighthouse -->
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom10;
      <Filter>[man_made]='lighthouse'</Filter>
      <PointSymbolizer file="&symbols;/lighthouse.p.13.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      <Filter>[man_made]='lighthouse'</Filter>
      <PointSymbolizer file="&symbols;/lighthouse.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[man_made]='tidalway'</Filter>
      <PointSymbolizer file="&symbols;/tidalway.png" placement="interior"/>
    </Rule>
<!-- peaks -->
    <Rule>
      &maxscale_zoom10;
      <Filter>[natural]='peak'</Filter>
      <PointSymbolizer file="&symbols;/peak.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      <Filter>[natural]='volcano'</Filter>
      <PointSymbolizer file="&symbols;/volcano.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom10;
      <Filter>[natural]='depth'</Filter>
      <PointSymbolizer file="&symbols;/depth.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[natural]='cave_entrance'</Filter>
      <PointSymbolizer file="&symbols;/poi_cave.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      <Filter>[natural]='spring'</Filter>
      <PointSymbolizer file="&symbols;/spring.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom16;
      <Filter>[natural]='tree'</Filter>
      <PointSymbolizer file="&symbols;/tree.png" ignore-placement="true" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[natural]='tree'</Filter>
      <PointSymbolizer file="&symbols;/tree2.png" ignore-placement="true" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>([power]='generator' and ([generator:source] = 'wind' or [power_source] = 'wind')) or [man_made]='power_wind'</Filter>
      <PointSymbolizer file="&symbols;/power_wind.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[man_made]='windmill'</Filter>
      <PointSymbolizer file="&symbols;/windmill.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='mast'</Filter>
      <PointSymbolizer file="&symbols;/communications.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[highway]='mini_roundabout'</Filter>
      <PointSymbolizer file="&symbols;/mini_round.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[highway]='gate' or [barrier]='gate'</Filter>
      <PointSymbolizer file="&symbols;/gate2.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule> 
     &maxscale_zoom16; 
     <Filter>[barrier]='lift_gate'</Filter>
     <PointSymbolizer file="&symbols;/liftgate.png" allow-overlap="false" placement="interior"/>
    </Rule> 
    <Rule>
      &maxscale_zoom16;
      <Filter>[barrier]='bollard' or [barrier]='block'</Filter>
      <PointSymbolizer file="&symbols;/bollard.png" allow-overlap="false" placement="interior"/>
    </Rule>
</Style>

<Layer name="amenity-symbols" status="on" srs="&osm2pgsql_projection;">
    <StyleName>symbols</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_point
      where aeroway in ('airport','aerodrome','helipad')
         or harbour in ('main','navy','middle','small','container')
         or barrier in ('bollard','gate','lift_gate','block')
         or highway in ('mini_roundabout','gate')
         or man_made in ('coal','copper','metal','mineral_water','lighthouse','power_wind','windmill','mast','borehole','tidalway')
         or (power='generator' and ("generator:source"='wind' or power_source='wind'))
         or "natural" in ('peak','volcano','depth','spring','tree','cave_entrance')
         or railway='level_crossing'
      ) as symbols</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="amenity-symbols-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>symbols</StyleName>
    <Datasource>
      <Parameter name="table">
      (select *
      from &prefix;_polygon
      where aeroway in ('airport','aerodrome','helipad')
         or harbour in ('main','navy','middle','small','container')
         or barrier in ('bollard','gate','lift_gate','block')
         or highway in ('mini_roundabout','gate')
         or man_made in ('coal','copper','metal','mineral_water','lighthouse','power_wind','windmill','mast','borehole','tidalway')
         or (power='generator' and ("generator:source"='wind' or power_source='wind'))
         or "natural" in ('peak','volcano','depth','spring','tree')
         or railway='level_crossing'
      ) as symbols</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
