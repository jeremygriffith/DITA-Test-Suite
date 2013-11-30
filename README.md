DITA Test Suite
===============

The DITA Test Suite (DTS) is a set of test cases for DITA 1.2 processors such as DITA2Go (http://dita2go.com) and the DITA-OT.  It consists of maps, topics, and ditavals that are 100% compliant with the DITA 1.2 spec.  The DITA source is in DITATestSuite.zip.  The results from DITA2Go are in OmniHelp in DITATestSuiteOH01.zip; download and unzip in its own directory, and double-click on \_DITATestSuite.htm.  The Word version is in DITATestSuite.docx.

Note that the DTS does not exercise <b>all</b> features of DITA 1.2.  For example, it has only topic types topic, concept, task, reference, and glossdef; there are many more.  We welcome additions from the community.

Also note that the DTS does exercise some features presently available only in DITA2Go.  For example, Chapters 7 and 8 use the same source files, but are in distinct "branches" with different conditions applied.  This is accomplished with PIs, so the source is still spec-compliant, but processors that do not support the branch PIs will show the same content for both chapters.  This method of "scoping" is expected to be implemented in DITA 1.3 whenever that gets out.  In the meantime, anyone else who wants to support the PIs can do so with our blessings and support.  They are documented in the DITA2Go Users Guide, http://www.dita2go.com/ohug/_ugdita2go.htm.

Related repositories here are for the uDoc markup language (a possible DITA replacement) at &lt;https://github.com/jeremygriffith/uDoc-Document-Markup-Language&gt; and for OmniHelp at &lt;https://github.com/jeremygriffith/OmniHelp&gt;.

