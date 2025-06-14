static const char *colorname[] = {
    /* 8 normal colors */
    "#3c3836", /* black   */
    "#cc241d", /* red     */
    "#98971a", /* green   */
    "#d79921", /* yellow  */
    "#458588", /* blue    */
    "#b16286", /* magenta */
    "#689d6a", /* cyan    */
    "#a89984", /* white   */
    
    /* 8 bright colors */
    "#928374", /* black   */
    "#fb4934", /* red     */
    "#b8bb26", /* green   */
    "#fabd2f", /* yellow  */
    "#83a598", /* blue    */
    "#d3869b", /* magenta */
    "#8ec07c", /* cyan    */
    "#fbf1c7", /* white   */

    [255] = 0,

    "#add8e6", /* cursor         */
    "#555555", /* reverse cursor */

    "#ebdbb2", /* foreground     */
    "#282828"  /* background     */
};

unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
