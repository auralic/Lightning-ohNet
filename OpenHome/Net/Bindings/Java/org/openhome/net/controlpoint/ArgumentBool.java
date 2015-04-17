package org.openhome.net.controlpoint;


import org.openhome.net.core.ParameterBool;

/**
 * Boolean type argument.  Only intended for use by auto-generated proxies.
 */
public class ArgumentBool extends Argument
{
	
	private static native long ActionArgumentCreateBoolInput(long aParameter, int aValue);
	private static native long ActionArgumentCreateBoolOutput(long aParameter);
	private static native int ActionArgumentValueBool(long aArgument);
	
	static
    {
        System.loadLibrary("ohNet");
        System.loadLibrary("ohNetJni");
    }
	
	/**
	 * Constructor for boolean input argument for an action.
	 * 
	 * <p>Intended to be write only (its value is written on construction and not be later read).
	 * 
	 * @param aParameter 	defines the name plus any bounds to the value for the argument.
	 * Must have been previously added to the action using <tt>Action.addInputParameter()</tt>.
	 * @param aValue 		value for the argument.
	 */
	public ArgumentBool(ParameterBool aParameter, boolean aValue)
	{
		iHandle = ActionArgumentCreateBoolInput(aParameter.getHandle(), (aValue ? 1 : 0));
	}
	
	/**
	 * Constructor for boolean output argument for an action
	 * 
	 * <p>Intended to be created without any value.  The value is later set after
	 * {@link CpService#invokeAction} is called but before the invocation's callback is run)
	 * 
	 * @param aParameter 	defines the name plus any bounds to the value for the argument.
	 * Must have been previously added to the action using <tt>Action.addOutputParameter()</tt>.
	 */
	public ArgumentBool(ParameterBool aParameter)
	{
		iHandle = ActionArgumentCreateBoolOutput(aParameter.getHandle());
	}
	
	/**
	 * Read the value of an integer argument.
	 * 
	 * <p>Only intended for use with output arguments inside the invocation completed callback.
	 * 
	 * @return current value of the argument.
	 */
	public boolean getValue()
	{
		int val = ActionArgumentValueBool(iHandle);
		
		return (val != 0);
	}

}