#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_Verilog = {{
//++Autogenerated -- start of section automatically generated
"accept_on alias always always_comb always_ff always_latch assert assign assume automatic before bind bins binsof break "
"cell const constraint context continue cover coverpoint cross deassign default defparam design disable dist do "
"edge else enum eventually expect export extends extern final first_match for force foreach forever forkjoin "
"genvar global highz0 highz1 "
"if iff ifnone ignore_bins illegal_bins implements implies import "
"incdir include initial inout input inside instance interconnect intersect "
"large let liblist library local localparam matches medium modport negedge nettype new nexttime noshowcancelled null "
"output "
"packed parameter posedge priority protected pull0 pull1 pulldown pullup pulsestyle_ondetect pulsestyle_onevent pure "
"rand randc ref reject_on release repeat restrict return "
"s_always s_eventually s_nexttime s_until s_until_with scalared showcancelled small soft solve specparam "
"static strong strong0 strong1 struct super sync_accept_on sync_reject_on "
"tagged this throughout timeprecision timeunit type typedef union unique unique0 until until_with untyped use "
"var vectored virtual wait wait_order weak weak0 weak1 while wildcard with within "

, // 1 code folding
"begin case casex casez checker class clocking config covergroup "
"end endcase endchecker endclass endclocking endconfig endfunction endgenerate endgroup endinterface endmodule "
"endpackage endprimitive endprogram endproperty endsequence endspecify endtable endtask "
"fork function generate interface join join_any join_none macromodule module package primitive program property "
"randcase randsequence sequence specify table task "

, // 2 data types
"and bit buf bufif0 bufif1 byte chandle cmos event int integer logic longint nand nmos nor not notif0 notif1 or pmos "
"rcmos real realtime reg rnmos rpmos rtran rtranif0 rtranif1 shortint shortreal signed string supply0 supply1 "
"time tran tranif0 tranif1 tri tri0 tri1 triand trior trireg unsigned uwire void wand wire wor xnor xor "

, // 3 directives
"__FILE__ __LINE__ begin_keywords celldefine "
"default_decay_time default_nettype default_trireg_strength define "
"delay_mode_distributed delay_mode_path delay_mode_unit delay_mode_zero "
"else elsif end_keywords endcelldefine endif ifdef ifndef include line nounconnected_drive pragma resetall timescale "
"unconnected_drive undef undefineall "

, // 4 system task and function
"acos( acosh( asin( asinh( assertcontrol( assertfailoff( assertfailon( assertkill( assertnonvacuouson( "
"assertoff( asserton( assertpassoff( assertpasson( assertvacuousoff( async$and$array( async$and$plane( "
"async$nand$array( async$nand$plane( async$nor$array( async$nor$plane( async$or$array( async$or$plane( "
"atan( atan2( atanh( "
"bits( bitstoreal( bitstoshortreal( "
"cast( ceil( changed( changed_gclk( changing_gclk( clog2( comment cos( cosh( countbits( countdrivers( countones( "
"coverage_control coverage_get coverage_get_max coverage_merge coverage_save "
"date dimensions( display( displayb( displayh( displayo( "
"dist_chi_square( dist_erlang( dist_exponential( dist_normal( dist_poisson( dist_t( dist_uniform( dumpall "
"dumpfile( dumpflush dumplimit( dumpoff dumpon "
"dumpports( dumpportsall( dumpportsflush( dumpportslimit( dumpportsoff( dumpportson( dumpvars dumpvars( "
"end enddefinitions error( exit exp( "
"falling_gclk( fatal( fclose( fdisplay( fdisplayb( fdisplayh( fdisplayo( fell( fell_gclk( feof( ferror( fflush( "
"fgetc( fgets( finish( floor( fmonitor( fmonitorb( fmonitorh( fmonitoro( fopen( fread( "
"fscanf( fseek( fstrobe( fstrobeb( fstrobeh( fstrobeo( ftell( fullskew( future_gclk( fwrite( fwriteb( fwriteh( fwriteo( "
"get_coverage getpattern( high( hold( hypot( increment( incsave( info( input( isunbounded( isunknown( itor( key( "
"left( list( ln( load_coverage_db log( log10( low( monitor( monitorb( monitorh( monitoro( monitoroff monitoron "
"nochange( nokey nolog onehot( onehot0( past( past_gclk( period( pow( printtimescale( "
"q_add( q_exam( q_full( q_initialize( q_remove( "
"random random( "
"readmemb( readmemh( realtime realtobits( recovery( recrem( removal( reset( reset_count reset_value restart( rewind( "
"right( rising_gclk( rose( rose_gclk( rtoi( "
"sampled( save( scale( scope scope( sdf_annotate( set_coverage_db_name setup( setuphold( sformat( sformatf( "
"shortrealtobits( showscopes( showvars( signed( sin( sinh( size( skew( sqrt( sreadmemb( sreadmemh( sscanf( "
"stable( stable_gclk( steady_gclk( stime stop( strobe( strobeb( strobeh( strobeo( swrite( swriteb( swriteh( swriteo( "
"sync$and$array( sync$and$plane( sync$nand$array( sync$nand$plane( sync$nor$array( sync$nor$plane( "
"sync$or$array( sync$or$plane( system( "
"tan( tanh( test$plusargs( time timeformat( timescale timeskew( typename( "
"ungetc( unpacked_dimensions( unsigned( upscope urandom urandom( urandom_range( value$plusargs( var vcdclose version "
"warning( width( write( writeb( writeh( writememb( writememh( writeo( "

, // 5 misc
"PATHPULSE$ STDERR STDIN STDOUT accept_on( and( assert( assume( atobin( atohex( atoi( atooct( atoreal( await( bintoa( "
"compare( constraint_mode( cover( delete( exists( expect( "
"find( find_first( find_first_index( find_index( find_last( find_last_index( first( first_match( "
"get( get_coverage( get_inst_coverage( get_randstate( getc( hextoa( icompare( index( insert( itoa( kill( last( len( "
"mailbox max( min( name( new( next( num( octtoa( or( "
"peek( pop_back( pop_front( post_randomize( pre_randomize( prev( process product( property( "
"push_back( push_front( put( putc( "
"rand_mode( randomize( realtoa( reject_on( resume( reverse( rsort( "
"sample( self( semaphore sequence( set_inst_name( set_randstate( shuffle( size( sort( srandom( start( status( std stop( "
"substr( sum( suspend( sync_accept_on( sync_reject_on( "
"tolower( toupper( try_get( try_peek( try_put( unique( unique_index( wait_order( xor( "

, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_Verilog[] = {
	EDITSTYLE_DEFAULT,
	{ MULTI_STYLE(SCE_V_KEYWORD, SCE_V_FOLDING_KEYWORD, 0, 0), NP2StyleX_Keyword, L"bold; fore:#FF8040" },
	{ SCE_V_DATATYPE, NP2StyleX_TypeKeyword, L"bold; fore:#1E90FF" },
	{ SCE_V_DIRECTIVE, NP2StyleX_Directive, L"fore:#FF8000" },
	{ SCE_V_ATTRIBUTE, NP2StyleX_Attribute, L"fore:#FF8000" },
	{ SCE_V_MODULE, NP2StyleX_Module, L"bold; fore:#007F7F" },
	//{ SCE_V_CLASS, NP2StyleX_Class, L"fore:#0080FF" },
	//{ SCE_V_INTERFACE, NP2StyleX_Interface, L"bold; fore:#1E90FF" },
	{ SCE_V_SYSTEM_TASK, NP2StyleX_SystemTaskFunction, L"fore:#0080FF" },
	//{ SCE_V_FUNCTION_DEFINITION, NP2StyleX_FunctionDefinition, L"bold; fore:#A46000" },
	{ SCE_V_FUNCTION, NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_V_MACRO, NP2StyleX_Macro, L"fore:#B000B0" },
	{ MULTI_STYLE(SCE_V_COMMENTLINE, SCE_V_COMMENTBLOCK, SCE_V_COMMENTBLOCKVSD, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ MULTI_STYLE(SCE_V_COMMENTLINEDOC, SCE_V_COMMENTBLOCKDOC, 0, 0), NP2StyleX_DocComment, L"fore:#408040" },
	{ SCE_V_STRING, NP2StyleX_String, L"fore:#008000" },
	{ SCE_V_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_V_FORMAT_SPECIFIER, NP2StyleX_FormatSpecifier, L"fore:#7C5AF3" },
	{ SCE_V_EVENT, NP2StyleX_Event, L"fore:#C08000" },
	{ SCE_V_LABEL, NP2StyleX_Label, L"back:#FFC040" },
	{ SCE_V_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_V_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexVerilog = {
	SCLEX_VERILOG, NP2LEX_VERILOG,
//Settings++Autogenerated -- start of section automatically generated
	{
		LexerAttr_PrintfFormatSpecifier,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // level1, level2
		0,
		'\\', SCE_V_ESCAPECHAR, SCE_V_FORMAT_SPECIFIER,
		0,
		0, SCE_V_NUMBER,
		SCE_V_OPERATOR, 0
		, KeywordAttr32(0, KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_PreSorted) // code folding
		| KeywordAttr32(2, KeywordAttr_PreSorted) // data types
		| KeywordAttr32(3, KeywordAttr_PreSorted | KeywordAttr_NoAutoComp) // directives
		| KeywordAttr32(4, KeywordAttr_NoLexer | KeywordAttr_NoAutoComp) // system task and function
		| KeywordAttr32(5, KeywordAttr_NoLexer) // misc
	},
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"Verilog HDL Source", Styles_Verilog),
	L"v; vh; sv; svh",
	&Keywords_Verilog,
	Styles_Verilog
};
