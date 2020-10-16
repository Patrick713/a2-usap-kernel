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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4decaf39, "gpio_to_desc" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xe4637331, "ath_printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3c7e0eaf, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x30462560, "ath_hw_cycle_counters_update" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x41c170e5, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xfdc61102, "gpiod_set_raw_value" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5a5b9ee7, "gpiod_get_raw_value" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe544be36, "devm_kmalloc" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "81772195230BE94CB83F5C4");
