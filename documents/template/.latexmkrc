# LaTeX
$latex = 'uplatex %O -kanji=utf8 -no-guess-input-enc -synctex=1 -interaction=nonstopmode %S';

# pdfLaTeX
$pdflatex = 'pdflatex %O -synctex=1 -interaction=nonstopmode %S';

# Biber, BibTeX
$biber = 'biber %O --bblencoding=utf8 -u -U --output_safechars %B';
$bibtex = 'bibtex %O %B';

# makeindex
$makeindex = 'mendex %O -o %D %S';

# dvipdf
$dvipdf = 'dvipdfmx %O -o %D %S';

# dvipd
$dvips = 'dvips %O -z -f %S | convbkmk -u > %D';
$ps2pdf = 'ps2pdf.exe %O %S %D';

# PDF
## $pdf_mode = 0; -no-pdf
## $pdf_mode = 1; $pdflatex
## $pdf_mode = 2; $ps2pdf
## $pdf_mode = 3; $dvipdf
## $pdf_mode = 4; $lualatex
## $pdf_mode = 5; $xdvipdfmx
$pdf_mode = 1;

# PDF viewer
$pdf_previewer = "start %S";
