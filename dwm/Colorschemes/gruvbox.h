static const char normbgcolor[]     = "#282828";
static const char normfgcolor[]     = "#a89984";
static const char normbordercolor[] = "#444444";
static const char selbgcolor[]      = "#3c3836";
static const char selfgcolor[]      = "#fbf1c7";
static const char selbordercolor[]  = "#d79921";

static const char *colors[][3]      = {
    /*                   fg           bg           border   */
    [SchemeNorm]     = { normfgcolor, normbgcolor, normbordercolor },
    [SchemeSel]      = { selfgcolor,  selbgcolor,  selbordercolor  },
    [SchemeStatus]   = { normfgcolor, normbgcolor, "#000000"       },
    [SchemeTagsSel]  = { selfgcolor,  selbgcolor,  "#000000"       },
    [SchemeTagsNorm] = { normfgcolor, normbgcolor, "#000000"       },
    [SchemeInfoSel]  = { selfgcolor,  selbgcolor,  "#000000"       },
    [SchemeInfoNorm] = { normfgcolor, normbgcolor, "#000000"       },
};
