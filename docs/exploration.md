# Exploration


Vizualize
- https://wktmap.com/: Can only do 1 object
- https://arthur-e.github.io/Wicket/sandbox-gmaps3.html

Cannot show two lines:

```text
LINESTRING (0 0, 0 1)
LINESTRING (10 10, 10 11)
```

Use converter, https://anyconv.com/wkt-converter/ ?

Nah, use Inkscape

Hard to draw straight and vertical lines.

It does seem my tool is best to create SVGs from WKT
  - https://github.com/richelbilderbeek/wkt_to_svg_converter
  - https://github.com/Notgnoshi/generative?tab=readme-ov-file#wkt2svg
  - Rpackages


```R
# From https://stackoverflow.com/a/53160696/3364162
str <- "POLYGON ((30 10, 40 40, 20 40, 10 20, 30 10))"

# library(rgeos) # DEAD
# For this library you need to `sudo apt-get install libgeos++-dev` in Linux
# test <- readWKT(str)

library(geos)

library(sp)
plot(test)
coords <- as.data.frame(coordinates(test@polygons[[1]]@Polygons[[1]])) # Extracts coordinates of the polygon
```

```
str <- "POLYGON ((30 10, 40 40, 20 40, 10 20, 30 10))"
library(geos)
geos::geos_read_wkt(str)
```

Can read but cannot save

CAD program?

- LibreCAD: cannot export to regular SVG
- OpenSCAD: cannot export to regular SVG
- FreeCAD can!




