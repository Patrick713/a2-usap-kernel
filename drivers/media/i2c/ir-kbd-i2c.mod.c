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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x71c90087, "memcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf38271ca, "rc_keydown" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xd03009bf, "rc_free_device" },
	{ 0xa8dadf72, "rc_register_device" },
	{ 0x5f754e5a, "memset" },
	{ 0xd2eb4c8d, "i2c_new_dummy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3cd17765, "rc_allocate_device" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xde45aa0d, "i2c_transfer" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe01f1504, "rc_unregister_device" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "C7BAC560E4355A93A5A1B7B");
