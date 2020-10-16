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
	{ 0x36138fcf, "param_array_ops" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x9a152689, "param_ops_int" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0xc6cb3238, "tm6000_unregister_extension" },
	{ 0x443c5427, "tm6000_register_extension" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2e406729, "snd_component_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeea0399, "strscpy" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x32e5f408, "snd_pcm_hw_constraint_integer" },
	{ 0x5f754e5a, "memset" },
	{ 0xbef976b3, "snd_pcm_hw_constraint_pow2" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x12c76c9d, "vmalloc_to_page" },
	{ 0x8f65f80e, "tm6000_set_audio_bitrate" },
	{ 0xa66f1d51, "tm6000_set_reg_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0xf89d6e83, "snd_pcm_stream_unlock" },
	{ 0xc31bbcb8, "snd_pcm_stream_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "snd-pcm,tm6000,snd");


MODULE_INFO(srcversion, "94EB9BD787CDDDCD227B682");
