/**
 * Made with Marlin Bitmap Converter
 * http://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'MPCNC.png'
 */
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64
const unsigned char custom_start_bmp[] PROGMEM = {
  0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8, // ...##########################################################################################################################...
  0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C, // ..##........................................................................................................................##..
  0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06, // .##..........................................................................................................................##.
  0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03, // ##............................................................................................................................##
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x83,0xF8,0x03,0xF8,0x1F,0xFF,0x80,0x00,0xFF,0x00,0xFE,0x01,0xF0,0x00,0xFF,0x01, // #.....#######.........#######......##############...............########........#######........#####............########.......#
  0x83,0xFC,0x03,0xF8,0x1F,0xFF,0xE0,0x03,0xFF,0xC0,0xFF,0x01,0xF0,0x03,0xFF,0xC1, // #.....########........#######......################...........############......########.......#####..........############.....#
  0x83,0xFC,0x07,0xF8,0x1F,0xFF,0xF0,0x0F,0xFF,0xE0,0xFF,0x01,0xF0,0x0F,0xFF,0xE1, // #.....########.......########......#################........###############.....########.......#####........###############....#
  0x83,0xFC,0x07,0xF8,0x1F,0xFF,0xF8,0x0F,0xFF,0xE0,0xFF,0x81,0xF0,0x0F,0xFF,0xE1, // #.....########.......########......##################.......###############.....#########......#####........###############....#
  0x83,0xFE,0x0F,0xF8,0x1F,0x83,0xF8,0x1F,0xC1,0xE0,0xFF,0x81,0xF0,0x1F,0xC1,0xE1, // #.....#########.....#########......######.....#######......#######.....####.....#########......#####.......#######.....####....#
  0x83,0xFE,0x0F,0xF8,0x1F,0x81,0xFC,0x3F,0x80,0x60,0xFF,0xC1,0xF0,0x3F,0x80,0x61, // #.....#########.....#########......######......#######....#######........##.....##########.....#####......#######........##....#
  0x83,0xFF,0x0F,0xF8,0x1F,0x80,0xFC,0x3F,0x00,0x20,0xFF,0xE1,0xF0,0x3F,0x00,0x21, // #.....##########....#########......######.......######....######..........#.....###########....#####......######..........#....#
  0x83,0xFF,0x1F,0xF8,0x1F,0x80,0xFC,0x7F,0x00,0x00,0xFF,0xE1,0xF0,0x7F,0x00,0x01, // #.....##########...##########......######.......######...#######................###########....#####.....#######...............#
  0x83,0xFF,0x1F,0xF8,0x1F,0x80,0xFC,0x7E,0x00,0x00,0xFB,0xF1,0xF0,0x7E,0x00,0x01, // #.....##########...##########......######.......######...######.................#####.######...#####.....######................#
  0x83,0xF7,0x9D,0xF8,0x1F,0x80,0xFC,0x7E,0x00,0x00,0xFB,0xF9,0xF0,0x7E,0x00,0x01, // #.....######.####..###.######......######.......######...######.................#####.#######..#####.....######................#
  0x83,0xF7,0xBD,0xF8,0x1F,0x81,0xFC,0x7E,0x00,0x00,0xF9,0xF9,0xF0,0x7E,0x00,0x01, // #.....######.####.####.######......######......#######...######.................#####..######..#####.....######................#
  0x83,0xF7,0xFD,0xF8,0x1F,0x83,0xF8,0x7E,0x00,0x00,0xF8,0xFD,0xF0,0x7E,0x00,0x01, // #.....######.#########.######......######.....#######....######.................#####...######.#####.....######................#
  0x83,0xF3,0xF9,0xF8,0x1F,0xFF,0xF0,0x7E,0x00,0x00,0xF8,0xFF,0xF0,0x7E,0x00,0x01, // #.....######..#######..######......#################.....######.................#####...############.....######................#
  0x83,0xF3,0xF9,0xF8,0x1F,0xFF,0xF0,0x7E,0x00,0x00,0xF8,0x7F,0xF0,0x7E,0x00,0x01, // #.....######..#######..######......#################.....######.................#####....###########.....######................#
  0x83,0xF3,0xF9,0xF8,0x1F,0xFF,0xC0,0x7E,0x00,0x00,0xF8,0x7F,0xF0,0x7E,0x00,0x01, // #.....######..#######..######......###############.......######.................#####....###########.....######................#
  0x83,0xF1,0xF1,0xF8,0x1F,0xFF,0x00,0x7F,0x00,0x00,0xF8,0x3F,0xF0,0x7F,0x00,0x01, // #.....######...#####...######......#############.........#######................#####.....##########.....#######...............#
  0x83,0xF1,0xF1,0xF8,0x1F,0x80,0x00,0x3F,0x00,0x20,0xF8,0x1F,0xF0,0x3F,0x00,0x21, // #.....######...#####...######......######.................######..........#.....#####......#########......######..........#....#
  0x83,0xF0,0xE1,0xF8,0x1F,0x80,0x00,0x3F,0x80,0x60,0xF8,0x1F,0xF0,0x3F,0x80,0x61, // #.....######....###....######......######.................#######........##.....#####......#########......#######........##....#
  0x83,0xF0,0x01,0xF8,0x1F,0x80,0x00,0x1F,0xC1,0xE0,0xF8,0x0F,0xF0,0x1F,0xC1,0xE1, // #.....######...........######......######..................#######.....####.....#####.......########.......#######.....####....#
  0x83,0xF0,0x01,0xF8,0x1F,0x80,0x00,0x1F,0xFF,0xE0,0xF8,0x07,0xF0,0x1F,0xFF,0xE1, // #.....######...........######......######..................################.....#####........#######.......################....#
  0x83,0xF0,0x01,0xF8,0x1F,0x80,0x00,0x0F,0xFF,0xE0,0xF8,0x07,0xF0,0x0F,0xFF,0xE1, // #.....######...........######......######...................###############.....#####........#######........###############....#
  0x83,0xF0,0x01,0xF8,0x1F,0x80,0x00,0x03,0xFF,0xC0,0xF8,0x03,0xF0,0x03,0xFF,0xC1, // #.....######...........######......######.....................############......#####.........######..........############.....#
  0x83,0xF0,0x01,0xF8,0x1F,0x80,0x00,0x00,0xFF,0x00,0xF8,0x03,0xF0,0x00,0xFF,0x01, // #.....######...........######......######.......................########........#####.........######............########.......#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x01, // #...........................................................................................#..................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x0F,0x08,0x00,0x00,0x00,0x01, // #.................................................###...............................####....#..................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x10,0x88,0x00,0x00,0x00,0x01, // #...................................................#..............................#....#...#..................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x08,0xF0,0xF1,0xE0,0x20,0x48,0xE3,0xC3,0xC7,0x81, // #...................................................#...####....####...####.......#......#..#...###...####....####...####......#
  0x80,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x02,0x10,0x20,0x49,0x14,0x24,0x08,0x41, // #...................................................#..#....#..#......#....#......#......#..#..#...#.#....#..#......#....#.....#
  0x80,0x00,0x00,0x00,0x00,0x00,0x09,0x09,0x02,0x10,0x20,0x49,0x04,0x24,0x08,0x41, // #...................................................#..#....#..#......#....#......#......#..#..#.....#....#..#......#....#.....#
  0x80,0x00,0x00,0x00,0x00,0x00,0x09,0x08,0xE3,0xF0,0x20,0x49,0x07,0xE3,0x8F,0xC1, // #...................................................#..#....#...###...######......#......#..#..#.....######...###...######.....#
  0x80,0x00,0x00,0x00,0x00,0x00,0x09,0x08,0x12,0x00,0x20,0x49,0x04,0x00,0x48,0x01, // #...................................................#..#....#......#..#...........#......#..#..#.....#...........#..#..........#
  0x80,0x00,0x00,0x00,0x00,0x00,0x09,0x08,0x12,0x10,0x10,0x89,0x14,0x20,0x48,0x41, // #...................................................#..#....#......#..#....#.......#....#...#..#...#.#....#......#..#....#.....#
  0x80,0x00,0x00,0x00,0x00,0x00,0x70,0xF1,0xE1,0xE0,0x0F,0x08,0xE3,0xC7,0x87,0x81, // #................................................###....####...####....####.........####....#...###...####...####....####......#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01, // #..............................................................................................................................#
  0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03, // ##............................................................................................................................##
  0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06, // .##..........................................................................................................................##.
  0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0C, // ..##........................................................................................................................##..
  0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8  // ...##########################################################################################################################...
};
