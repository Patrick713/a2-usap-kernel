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
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x8733236, "intlog10" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x2ce5182e, "i2c_mux_add_adapter" },
	{ 0x28f70f7f, "i2c_mux_alloc" },
	{ 0x6c4b1218, "__regmap_init_i2c" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9d669763, "memcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb2b8a14, "regmap_exit" },
	{ 0xa9644ec2, "i2c_mux_del_adapters" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "dvb-core,i2c-mux,regmap-i2c");

MODULE_ALIAS("i2c:rtl2832");

MODULE_INFO(srcversion, "845997EA79C2B6119C6364A");
