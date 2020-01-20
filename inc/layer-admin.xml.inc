<!-- Style f\xFCr admin_level 0 bis 3 ungeaendert --> 
<Style name="admin-01234">
    <Rule>
      <Filter>[admin_level]='2' or [admin_level]='3'</Filter>
      &maxscale_zoom4;
      &minscale_zoom6;
      <LineSymbolizer stroke="purple" stroke-width="0.6" stroke-opacity="0.2"/>
    </Rule>
    <Rule>      <Filter>[admin_level]='2' or [admin_level]='3'</Filter>
      &maxscale_zoom7;
      &minscale_zoom9;
      <LineSymbolizer stroke="purple" stroke-width="2" stroke-opacity="0.2"/>
    </Rule>
   <Rule>
      <Filter>[admin_level]='2'</Filter>      &maxscale_zoom10;
      <LineSymbolizer stroke="purple" stroke-width="6" stroke-opacity="0.1"/>
    </Rule>
    <Rule>
      <Filter>[admin_level]='3'</Filter>
      &maxscale_zoom10;
      <LineSymbolizer stroke="purple" stroke-width="5" stroke-dasharray="4,2" stroke-opacity="0.1"/>
    </Rule>
<!-- Level 4 in zoom 8 und 9 statt bisher 1,0 jetzt 1,5 und in zoom 10 jetzt 3 statt 1 -->
    <Rule>
      <Filter>[admin_level]='4'</Filter>
      &maxscale_zoom4;
      &minscale_zoom6;
      <LineSymbolizer stroke="purple" stroke-width="0.6" stroke-dasharray="4,3" stroke-opacity="0.2"/>
    </Rule>
    <Rule>
      <Filter>[admin_level]='4'</Filter>
      &maxscale_zoom7;
      <LineSymbolizer stroke="purple" stroke-width="1" stroke-dasharray="4,3" stroke-opacity="0.2"/>
    </Rule>
    <Rule>
      <Filter>[admin_level]='4'</Filter>
      &maxscale_zoom8;
      &minscale_zoom9;
      <LineSymbolizer stroke="purple" stroke-width="1.5" stroke-dasharray="4,3" stroke-opacity="0.2"/>
    </Rule>
    <Rule>
      <Filter>[admin_level]='4'</Filter>
      &maxscale_zoom10;
      <LineSymbolizer stroke="purple" stroke-width="3" stroke-dasharray="4,3" stroke-opacity="0.2"/>
    </Rule>
</Style>

<!-- Style f\xFCr admin_levels 5 bis 8 geaendert --> 
<Style name="admin-5678">
<!-- Level 5 war ab zoom 11 (5 km) sichtbar, sollte zoom 8 (50 km) sein -->
    <Rule>
      <Filter>[admin_level]='5'</Filter>
      &maxscale_zoom8;
      &minscale_zoom9;
      <LineSymbolizer stroke="purple" stroke-width="0.6" stroke-dasharray="6,3,2,3,2,3" stroke-opacity="0.3"/>
    </Rule>
   <Rule>
      <Filter>[admin_level]='5'</Filter>
      &maxscale_zoom10;
      <LineSymbolizer stroke="purple" stroke-width="2" stroke-dasharray="6,3,2,3,2,3" stroke-opacity="0.3"/>
    </Rule>
<!-- Level 6 war zoom 12 (3 km) sichtbar, sollte zoom 9 (20 km) sein -->
    <Rule>
      <Filter>[admin_level]='6'</Filter>
      &maxscale_zoom9;
      <LineSymbolizer stroke="purple" stroke-width="0.6" stroke-dasharray="6,3,2,3" stroke-opacity="0.3"/>
    </Rule>
    <Rule>
      <Filter>[admin_level]='6'</Filter>
      &maxscale_zoom10;
      <LineSymbolizer stroke="purple" stroke-width="2" stroke-dasharray="6,3,2,3,2,3" stroke-opacity="0.3"/>
    </Rule>
<!-- Level 7 und 8 waren zoom 12 (3 km), Level 7 sollte zoom 11 (5 km) sein -->
<Rule>
      <Filter>[admin_level]='7'</Filter>
      &maxscale_zoom10;
      <LineSymbolizer stroke="purple" stroke-width="1.5" stroke-dasharray="5,2" stroke-opacity="0.3"/>
    </Rule>
<!-- Level 7 und 8 waren zoom 12 (3 km), Level 8 kann zoom 12 (3 km) bleiben -->
    <Rule>
      <Filter>[admin_level]='8'</Filter>
      &maxscale_zoom12;
      <LineSymbolizer stroke="purple" stroke-width="1.5" stroke-dasharray="5,2" stroke-opacity="0.3"/>
    </Rule></Style>
<!-- unge\xE4ndert -->
<Style name="admin-other">
    <Rule>
      <Filter>[admin_level]='10' or [admin_level]='9'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer stroke="purple" stroke-width="2" stroke-dasharray="2,3" stroke-opacity="0.3"/>
    </Rule>   <Rule>
      <Filter>not [admin_level] != ''</Filter>
      &maxscale_zoom9;
      &minscale_zoom11;
      <LineSymbolizer stroke="purple" stroke-width="1" stroke-opacity="0.2"/>
    </Rule>
</Style>
<!-- geht es hier um die Beschriftung? Sehe noch nicht, was zu aendern waere --> 
<Layer name="admin-01234" status="on" srs="&osm2pgsql_projection;">
    <StyleName>admin-01234</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,admin_level
       from &prefix;_roads
       where "boundary"='administrative'
         and admin_level in ('0','1','2','3','4')
       ) as admin</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="admin-5678" status="on" srs="&osm2pgsql_projection;">
    <StyleName>admin-5678</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,admin_level
       from &prefix;_roads
       where "boundary"='administrative'
         and admin_level in ('5','6','7','8')
       ) as admin</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="admin-other" status="on" srs="&osm2pgsql_projection;">
    <StyleName>admin-other</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,admin_level
       from &prefix;_roads
       where "boundary"='administrative'
         and (admin_level is null or admin_level not in ('0','1','2','3','4','5','6','7','8'))
       ) as admin</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

