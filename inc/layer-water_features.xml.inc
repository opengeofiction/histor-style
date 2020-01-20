<Style name="dam">
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom18;
      <LineSymbolizer stroke-linejoin="round" stroke="#444" stroke-width="2" stroke-linecap="round"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <TextSymbolizer size="8" fill="#222" fontset-name="book-fonts" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="marinas-area">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom15;
      <LineSymbolizer stroke="blue" stroke-width="1" stroke-dasharray="6,2" stroke-opacity="0.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <LineSymbolizer stroke="blue" stroke-width="2" stroke-dasharray="6,2" stroke-opacity="0.5"/>
    </Rule>
</Style>
<Style name="piers-area">
    <Rule>
      &maxscale_zoom12;
      <PolygonSymbolizer fill="#f2efe9"/>
    </Rule>
</Style>
<Style name="piers">
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[man_made]='breakwater' or [man_made]='groyne'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="1"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
      <Filter>[man_made]='pier'</Filter>
      <LineSymbolizer stroke="#f2efe9" stroke-width="1.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[man_made]='breakwater' or [man_made]='groyne'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="2"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom15;
      <Filter>[man_made]='pier'</Filter>
      <LineSymbolizer stroke="#f2efe9" stroke-width="3"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[man_made]='breakwater' or [man_made]='groyne'</Filter>
      <LineSymbolizer stroke="#aaa" stroke-width="4"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <Filter>[man_made]='pier'</Filter>
      <LineSymbolizer stroke="#f2efe9" stroke-width="7"/>
    </Rule>
</Style>
<!-- Deiche -->
<Style name="dykes">
    <Rule>
      &maxscale_zoom10;
      &minscale_zoom10;
      <Filter>[man_made]='dyke'</Filter>
      <LineSymbolizer stroke="#2d2" stroke-width="4"/>
	  <LineSymbolizer stroke="#ccc" stroke-width="2"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      &minscale_zoom12;
	  <Filter>[man_made]='dyke'</Filter>
	  <LineSymbolizer stroke="#2d2" stroke-width="6"/>
	  <LineSymbolizer stroke="#ccc" stroke-width="3"/> 
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[man_made]='dyke'</Filter>
      <LineSymbolizer stroke="#2d2" stroke-width="8"/>
	  <LineSymbolizer stroke="#ccc" stroke-width="4"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom16;
      <Filter>[man_made]='dyke'</Filter>
      <LineSymbolizer stroke="#2d2" stroke-width="12"/>
	  <LineSymbolizer stroke="#ccc" stroke-width="6"/>
    </Rule>
	<Rule>
      &maxscale_zoom17;
      &minscale_zoom18;
      <Filter>[man_made]='dyke'</Filter>
      <LineSymbolizer stroke="#2d2" stroke-width="16"/>
	  <LineSymbolizer stroke="#ccc" stroke-width="8"/>
    </Rule>
</Style>
<Style name="locks">
<Rule>
      &maxscale_zoom15;
      &minscale_zoom18;
      <Filter>[waterway]='lock_gate'</Filter>
      <PointSymbolizer file="&symbols;/lock_gate.png"/>
</Rule>
</Style>
<Layer name="dam" status="on" srs="&osm2pgsql_projection;">
    <StyleName>dam</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name from &prefix;_line where waterway='dam') as dam</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="marinas-area" status="on" srs="&osm2pgsql_projection;">
    <StyleName>marinas-area</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way from &prefix;_polygon where leisure ='marina') as marinas
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="piers-area" status="on" srs="&osm2pgsql_projection;">
    <StyleName>piers-area</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,man_made from &prefix;_polygon where man_made in ('pier','breakwater','groyne')) as piers
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="piers" status="on" srs="&osm2pgsql_projection;">
     <StyleName>piers</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,man_made from &prefix;_line where man_made in ('pier','breakwater','groyne')) as piers
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="dykes" status="on" srs="&osm2pgsql_projection;">
     <StyleName>dykes</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,man_made from &prefix;_line where man_made ='dyke') as dykes
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="locks" status="on" srs="&osm2pgsql_projection;">
     <StyleName>locks</StyleName>
     <Datasource>
      <Parameter name="table">
      (select way,waterway from &prefix;_point where waterway='lock_gate') as locks
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>


