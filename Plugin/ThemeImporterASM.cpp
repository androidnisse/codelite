#include "ThemeImporterASM.hpp"

#include <wx/stc/stc.h>

ThemeImporterASM::ThemeImporterASM()
{
    SetKeywords0("aaa aad aam aas adc add and call cbw clc cld cli cmc cmp cmps cmpsb cmpsw cwd daa das dec div esc "
                 "hlt idiv imul in inc int into iret ja jae jb jbe jc jcxz je jg jge jl jle jmp jna jnae jnb jnbe jnc "
                 "jne jng jnge jnl jnle jno jnp jns jnz jo jp jpe jpo js jz lahf lds lea les lods lodsb lodsw loop "
                 "loope loopew loopne loopnew loopnz loopnzw loopw loopz loopzw mov movs movsb movsw mul neg nop not "
                 "or out pop popf push pushf rcl rcr ret retf retn rol ror sahf sal sar sbb scas scasb scasw shl shr "
                 "stc std sti stos stosb stosw sub test wait xchg xlat xlatb xor bound enter ins insb insw leave outs "
                 "outsb outsw popa pusha pushw arpl lar lsl sgdt sidt sldt smsw str verr verw clts lgdt lidt lldt lmsw "
                 "ltr bsf bsr bt btc btr bts cdq cmpsd cwde insd iretd iretdf iretf jecxz lfs lgs lodsd loopd looped "
                 "loopned loopnzd loopzd lss movsd movsx movzx outsd popad popfd pushad pushd pushfd scasd seta setae "
                 "setb setbe setc sete setg setge setl setle setna setnae setnb setnbe setnc setne setng setnge setnl "
                 "setnle setno setnp setns setnz seto setp setpe setpo sets setz shld shrd stosd bswap cmpxchg invd "
                 "invlpg wbinvd xadd lock rep repe repne repnz repz cflush cpuid emms femms cmovo cmovno cmovb cmovc "
                 "cmovnae cmovae cmovnb cmovnc cmove cmovz cmovne cmovnz cmovbe cmovna cmova cmovnbe cmovs cmovns "
                 "cmovp cmovpe cmovnp cmovpo cmovl cmovnge cmovge cmovnl cmovle cmovng cmovg cmovnle cmpxchg486 "
                 "cmpxchg8b loadall loadall286 ibts icebp int1 int3 int01 int03 iretw popaw popfw pushaw pushfw rdmsr "
                 "rdpmc rdshr rdtsc rsdc rsldt rsm rsts salc smi smint smintold svdc svldt svts syscall sysenter "
                 "sysexit sysret ud0 ud1 ud2 umov xbts wrmsr wrshr callq retq");

    SetKeywords1("f2xm1 fabs fadd faddp fbld fbstp fchs fclex fcom fcomp fcompp fdecstp fdisi fdiv fdivp fdivr fdivrp "
                 "feni ffree fiadd ficom ficomp fidiv fidivr fild fimul fincstp finit fist fistp fisub fisubr fld fld1 "
                 "fldcw fldenv fldenvw fldl2e fldl2t fldlg2 fldln2 fldpi fldz fmul fmulp fnclex fndisi fneni fninit "
                 "fnop fnsave fnsavew fnstcw fnstenv fnstenvw fnstsw fpatan fprem fptan frndint frstor frstorw fsave "
                 "fsavew fscale fsqrt fst fstcw fstenv fstenvw fstp fstsw fsub fsubp fsubr fsubrp ftst fwait fxam fxch "
                 "fxtract fyl2x fyl2xp1 fsetpm fcos fldenvd fnsaved fnstenvd fprem1 frstord fsaved fsin fsincos "
                 "fstenvd fucom fucomp fucompp fcomi fcomip ffreep fcmovb fcmove fcmovbe fcmovu fcmovnb fcmovne "
                 "fcmovnbe fcmovnu");
    SetKeywords2("ah al ax bh bl bp bx ch cl cr0 cr2 cr3 cr4 cs cx dh di dl dr0 dr1 dr2 dr3 dr6 dr7 ds dx eax ebp ebx "
                 "ecx edi edx es esi esp fs gs si sp ss st tr3 tr4 tr5 tr6 tr7 st0 st1 st2 st3 st4 st5 st6 st7 mm0 mm1 "
                 "mm2 mm3 mm4 mm5 mm6 mm7 xmm0 xmm1 xmm2 xmm3 xmm4 xmm5 xmm6 xmm7");
    SetKeywords3(
        ".186 .286 .286c .286p .287 .386 .386c .386p .387 .486 .486p .8086 .8087 .alpha .break .code .const .continue "
        ".cref .data .data? .dosseg .else .elseif .endif .endw .err .err1 .err2 .errb .errdef .errdif .errdifi .erre "
        ".erridn .erridni .errnb .errndef .errnz .exit .fardata .fardata? .if .lall .lfcond .list .listall .listif "
        ".listmacro .listmacroall .model .no87 .nocref .nolist .nolistif .nolistmacro .radix .repeat .sall .seq "
        ".sfcond .stack .startup .tfcond .type .until .untilcxz .while .xall .xcref .xlist alias align assume catstr "
        "comm comment db dd df dosseg dq dt dup dw echo else elseif elseif1 elseif2 elseifb elseifdef elseifdif "
        "elseifdifi elseife elseifidn elseifidni elseifnb elseifndef end endif endm endp ends eq equ even exitm extern "
        "externdef extrn for forc ge goto group gt high highword if if1 if2 ifb ifdef ifdif ifdifi ife ifidn ifidni "
        "ifnb ifndef include includelib instr invoke irp irpc label le length lengthof local low lowword lroffset lt "
        "macro mask mod .msfloat name ne offset opattr option org %out page popcontext proc proto ptr public purge "
        "pushcontext record repeat rept seg segment short size sizeof sizestr struc struct substr subtitle subttl "
        "textequ this title type typedef union while width db dw dd dq dt resb resw resd resq rest incbin equ times "
        "%define %idefine %xdefine %xidefine %undef %assign %iassign %strlen %substr %macro %imacro %endmacro %rotate "
        ".nolist %if %elif %else %endif %ifdef %ifndef %elifdef %elifndef %ifmacro %ifnmacro %elifmacro %elifnmacro "
        "%ifctk %ifnctk %elifctk %elifnctk %ifidn %ifnidn %elifidn %elifnidn %ifidni %ifnidni %elifidni %elifnidni "
        "%ifid %ifnid %elifid %elifnid %ifstr %ifnstr %elifstr %elifnstr %ifnum %ifnnum %elifnum %elifnnum %error %rep "
        "%endrep %exitrep %include %push %pop %repl struct endstruc istruc at iend align alignb %arg %stacksize %local "
        "%line bits use16 use32 section absolute extern global common cpu org section group import export");

    SetKeywords4("$ ? @b @f addr basic byte c carry? dword far far16 fortran fword near near16 overflow? parity? "
                 "pascal qword real4 real8 real10 sbyte sdword sign? stdcall sword syscall tbyte vararg word zero? "
                 "flat near32 far32 abs all assumes at casemap common compact cpu dotname emulator epilogue error "
                 "export expr16 expr32 farstack flat forceframe huge language large listing ljmp loadds m510 medium "
                 "memory nearstack nodotname noemulator nokeyword noljmp nom510 none nonunique nooldmacros "
                 "nooldstructs noreadonly noscoped nosignextend nothing notpublic oldmacros oldstructs os_dos para "
                 "private prologue radix readonly req scoped setif2 smallstack tiny use16 use32 uses a16 a32 o16 o32 "
                 "byte word dword nosplit $ $$ seq wrt flat large small .text .data .bss near far %0 %1 %2 %3 %4 %5 %6 "
                 "%7 %8 %9");
    SetFileExtensions("*.asm;*.s;*.S");
}

ThemeImporterASM::~ThemeImporterASM() {}

LexerConf::Ptr_t ThemeImporterASM::Import(const wxFileName& theme_file)
{
    // Initialize the import
    LexerConf::Ptr_t lexer = InitializeImport(theme_file, "assembly", wxSTC_LEX_ASM);

    AddProperty(lexer, wxSTC_ASM_DEFAULT, "Default", m_foreground.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_COMMENT, "Comment", m_singleLineComment.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_NUMBER, "Number", m_number.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_STRING, "String", m_string.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_OPERATOR, "Operator", m_oper.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_IDENTIFIER, "Identifier", m_foreground.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_CPUINSTRUCTION, "CPU Instruction", m_keyword.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_MATHINSTRUCTION, "Math Instruction", m_keyword.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_MATHINSTRUCTION, "Math Instruction", m_keyword.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_REGISTER, "Register", m_klass.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_DIRECTIVE, "Directive", m_foreground.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_DIRECTIVEOPERAND, "Directive Operand", m_foreground.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_COMMENTBLOCK, "Comment block", m_multiLineComment.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_CHARACTER, "Character", m_string.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_STRINGEOL, "String EOL", m_string.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_EXTINSTRUCTION, "Ext Instruction", m_keyword.colour, m_background.colour);
    AddProperty(lexer, wxSTC_ASM_COMMENTDIRECTIVE, "Comment directive", m_singleLineComment.colour,
                m_background.colour);

    // Finalize the import
    FinalizeImport(lexer);
    return lexer;
}
