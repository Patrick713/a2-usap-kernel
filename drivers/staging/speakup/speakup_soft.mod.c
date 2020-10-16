#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x9b127966, "spk_var_store" },
	{ 0x9e6dba4c, "spk_var_show" },
	{ 0x346083c0, "synth_remove" },
	{ 0xf8d151fe, "synth_add" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x84dad068, "synth_buffer_getc" },
	{ 0x76d40046, "synth_buffer_skip_nonlatin1" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa07281f, "misc_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88db665b, "kstrtoul_from_user" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x41a160e5, "synth_buffer_empty" },
	{ 0xf3e7c105, "synth_current" },
	{ 0x2e7e21d7, "speakup_event" },
	{ 0xbbd15a51, "speakup_start_ttys" },
	{ 0xc5850110, "printk" },
	{ 0x9ec748a7, "misc_deregister" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8181ceec, "speakup_info" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "speakup");


MODULE_INFO(srcversion, "95382B9530A17EBEF71C483");
